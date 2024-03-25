import os
import sys
import json
import shutil
import textwrap
import subprocess
from datetime import datetime
from setup import *

def help():
	print(textwrap.dedent("""
		\033[1mUsage:\033[0m trillian <command>

		\033[1mDescription:\033[0m
		Trillian is a tool to manage projects using ft_modules.
		If you want to learn more go to https://github.com/brenohildebrand/ft_modules.

		\033[1mCommands:\033[0m
			\033[1mhelp:\033[0m
			Display this information.

			\033[1minit:\033[0m
			Initializes a new project.

			\033[1mbuild:\033[0m
			Builds the project.
					   
			\033[1mrun:\033[0m
			Runs the project.

			\033[1mnorm:\033[0m
			Checks for norm errors.

			\033[1minstall:\033[0m
			Updates trillian.json by adding the given modules to the dependencies. It also
			updates the vscode configuration if the editor property is set to 'vscode' in
			trillian.json.
					   
			\033[1muninstall:\033[0m
			Updates trillian.json by removing the given modules from the dependencies. It also
			updates the vscode configuration if the editor property is set to 'vscode' in
			trillian.json.
			
			\033[1mversion:\033[0m
			Prints the version of trillian.
					   
		May your code be bug free. Bye!
	""").strip('\n'))

def init():
	if os.listdir(PROJECT_ROOT):
		print('Trillian can only initialize a new project if the folder is empty.')
		quit()
	if CONFIG['editor'] == 'vscode':
		os.makedirs('.vscode')
		os.makedirs('.vscode/c_cpp_properties.json')
	os.makedirs('config')
	os.makedirs('config/trillian.json')
	with open('config/trillian.json', 'w') as file:
		json.dump(CONFIG['trillian'], file, indent=4)
	os.makedirs('docs')
	os.makedirs('source')
	os.makedirs('submit')
	os.makedirs('config')
	os.makedirs('.gitignore')
	with open('.gitignore', 'w') as file:
		file.write('submit')
	os.makedirs('README.md')

def build():
	if config['trillian']['type'] != 'project':
		raise Exception(f'Trillian can only build projects.')

	# copy everything to /submit
	# create the dependencies_set (a set with all the dependencies recursevely)
	def get_config_for_dependency(dependency):
		config = None
		path = trillian_root + '../../modules/' + dependency + '/' + 'config/' + 'trillian.json'
		if os.path.exists(path):
			with open(path) as file:
				data = json.load(file)
		else:
			raise Exception(f'There is no file at {path}.')
		config = data;
		return (config)
	
	def fill_dependencies_set(dependencies_set, dependencies):
		for dependency in dependencies:
			dependencies_set.add(dependency)
			config = get_config_for_dependency(dependency)
			fill_dependencies_set(dependencies_set, config['dependencies'])

	dependencies_set = set()
	fill_dependencies_set(dependencies_set, config['trillian']['dependencies'])

	# get original paths and submit paths
	original_paths = []
	submit_paths = []

	for dependency in dependencies_set:
		path = os.path.join(trillian_root, '../../modules', dependency, 'includes')
		for root, dirs, files in os.walk(path):
			for file in files:
				original_paths.append(os.path.join(root, file))
				submit_paths.append(os.path.join(project_root, 'submit', dependency, file))
		path = os.path.join(trillian_root, '../../modules', dependency, 'source')
		for root, dirs, files in os.walk(path):
			for file in files:
				original_paths.append(os.path.join(root, file))
				submit_paths.append(os.path.join(project_root, 'submit', dependency, file))
	path = os.path.join(project_root, 'source')
	for root, dirs, files in os.walk(path):
		for file in files:
			original_paths.append(os.path.join(root, file))
			submit_paths.append(os.path.join(project_root, 'submit', 'project', file))


	# copy newer and non-existent for modules
	if not os.path.exists(os.path.join(project_root, 'submit')):
		os.makedirs(os.path.join(project_root,'submit'))
	if not os.path.exists(os.path.join(project_root, 'submit', 'project')):
		os.makedirs(os.path.join(project_root,'submit', 'project'))
	for dependency in dependencies_set:
		if not os.path.exists(os.path.join(project_root, 'submit', dependency)):
			os.makedirs(os.path.join(project_root,'submit', dependency))
	for original_path, submit_path in zip(original_paths, submit_paths):
		if os.path.exists(submit_path) == False:
			shutil.copyfile(original_path, submit_path)
		else:
			original_timestamp = os.path.getmtime(original_path)
			submit_timestamp = os.path.getmtime(submit_path)
			if submit_timestamp < original_timestamp:
				shutil.copyfile(original_path, submit_path)

	# check for deleted files and update submit accordingly
	# if there's at least one delete all .d files
	# go through submit files and check if they exist on the submit_paths
	# if it does not it should be deleted and all the dependencies files as well
	for root, dirs, files in os.walk(os.path.join(project_root, 'submit')):
		for file in files:
			if file.endswith('.c'):
				submit_path = os.path.join(root, file)
				if submit_path not in submit_paths:
					os.remove(submit_path)
					for root, dirs, files in os.walk(os.path.join(project_root, 'submit')):
						for file in files:
							if file.endswith('.d'):
								os.remove(os.path.join(root, file))

	# generate makefile for the chosen mode
	def generate_sources():
		sources = ""
		for path in submit_paths:
			if path.endswith('.c'):
				basename = os.path.basename(path)
				dirname = os.path.basename(os.path.dirname(path))
				sources += f'\t\t\t\t\t\t{dirname}/{basename} \\\n'
		sources = sources[5:]
		sources = sources[:-2]
		sources += '\n'
		return (sources)

	def generate_objects(sources):
		return (sources.replace('.c', '.o'))

	def generate_headers():
		headers = ""
		for path in submit_paths:
			if path.endswith('.h'):
				basename = os.path.basename(path)
				dirname = os.path.basename(os.path.dirname(path))
				headers += f'\t\t\t\t\t\t{dirname}/{basename} \\\n'
		headers = headers[5:]
		headers = headers[:-2]
		headers += '\n'
		return (headers)

	def generate_dependencies(sources):
		return (sources.replace('.c', '.d'))

	def generate_includes():
		includes = ""
		for dependency in dependencies_set:
			includes += f'\t\t\t\t\t\t-iquote {dependency} \\\n'
		includes = includes[5:]
		includes = includes[:-2]
		includes += '\n'
		return (includes)

	def generate_makefile():
		username = config['user']['username']
		current_datetime = datetime.now().strftime('%Y/%m/%d %H:%M:%S')
		name = config['trillian']['name']
		sources = generate_sources()
		objects = generate_objects(sources)
		headers = generate_headers()
		dependencies = generate_dependencies(sources)
		includes = generate_includes()
		# sources = 
		makefile = textwrap.dedent(f"""
			# **************************************************************************** #
			#                                                                              #
			#                                                         :::      ::::::::    #
			#    Makefile                                           :+:      :+:    :+:    #
			#                                                     +:+ +:+         +:+      #
			#    By: {format(f'{username} <{username}@student.42.fr>', '<42')} +#+  +:+       +#+         #
			#                                                 +#+#+#+#+#+   +#+            #
			#    Created: {current_datetime} by {format(username, '<17')} #+#    #+#              #
			#    Updated: {current_datetime} by {format(username, '<16')} ###   ########.fr        #
			#                                                                              #
			# **************************************************************************** #

			# This Makefile was automatically generated by Trillian.
			# See https://github.com/brenohildebrand/ft_modules to learn more.

			NAME = {name}

			CC = gcc
			CFLAGS = -Wall -Wextra -Werror -g -MMD -MP

			SOURCES = {sources}
			OBJECTS = {objects}
			HEADERS = {headers}
			DEPENDS = {dependencies}
			INCLUDES = {includes}
			
			all: $(NAME)

			$(NAME): $(OBJECTS)
				$(CC) $(CFLAGS) $(OBJECTS) $(INCLUDES) -o $(NAME)

			%.o: %.c
				$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

			clean:
				$(RM) $(OBJECTS) $(DEPENDS)

			fclean: clean
				$(RM) $(NAME)

			re: fclean all

			-include $(DEPENDS)

			.PHONY: all clean fclean re
		""").strip('\n')
		path = os.path.join(project_root, 'submit', 'Makefile')
		with open(path, 'w') as file:
			file.write(makefile)

	generate_makefile()

	# run make
	working_directory = os.path.join(project_root, 'submit')
	completed_process = subprocess.run(['make'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, cwd=working_directory)
	if completed_process.returncode != 0:
		print(completed_process.stderr.decode('utf-8'))
		quit(completed_process.returncode)

def run():
	build()
	working_directory = os.path.join(project_root, 'submit')
	command = './' + config['trillian']['name']
	completed_process = subprocess.run([command] + arguments[2:], stdout=sys.stdout, stderr=sys.stderr, cwd=working_directory)
	quit(completed_process.returncode)

def norm():
	working_directory = os.path.join(project_root, 'source')
	command = 'norminette'
	completed_process = subprocess.run([command] + arguments[2:], stdout=sys.stdout, stderr=sys.stderr, cwd=working_directory)
	quit(completed_process.returncode)

def install():
	# just add a dependency to the list of dependencies
	# json.dump(config['trillian'], file, indent=4)
	modules = arguments[2:]
	for module in modules:
		if module not in list_of_modules:
			print(f'Module {module} does not exist.')
		elif module in config['trillian']['dependencies']:
			print(f'Module {module} is already installed.')
		else:
			config['trillian']['dependencies'].append(module)
	path = os.path.join(project_root, 'config', 'trillian.json')
	with open(path, 'w') as file:
		json.dump(config['trillian'], file, indent=4)

	if config['trillian']['editor'] == 'vscode':
		if not 'c_cpp_properties' in config['editor']:
			config['editor']['c_cpp_properties'] = {}
		if not 'configurations' in config['editor']['c_cpp_properties']:
			config['editor']['c_cpp_properties']['configurations'] = [
				{
					"name": "Linux",
					"includePath": [],
					"defines": [],
					"intelliSenseMode": "linux-gcc-x64",
            		"compilerPath": "/usr/bin/gcc",
            		"cStandard": "c99",
				}
			]
		for module in modules:
			path = os.path.join(trillian_root, '../../modules', module, 'includes')
			if path not in config['editor']['c_cpp_properties']['configurations'][0]['includePath']:
				config['editor']['c_cpp_properties']['configurations'][0]['includePath'].append(os.path.join(trillian_root, '../../modules', module, 'includes'))
		path = os.path.join(project_root, '.vscode', 'c_cpp_properties.json')
		with open(path, 'w') as file:
			json.dump(config['editor']['c_cpp_properties'], file, indent=4)

def uninstall():
	# just remove a dependency from the list of dependencies
	# json.dump(config['trillian'], file, indent=4)
	modules = arguments[2:]
	for module in modules:
		if module not in list_of_modules:
			print(f'Module {module} does not exist.')
		elif module not in config['trillian']['dependencies']:
			print(f'Module {module} is not installed.')
		else:
			config['trillian']['dependencies'].remove(module)
	path = os.path.join(project_root, 'config', 'trillian.json')
	with open(path, 'w') as file:
		json.dump(config['trillian'], file, indent=4)

	if config['trillian']['editor'] == 'vscode':
		for module in modules:
			path = os.path.join(trillian_root, '../../modules', module, 'includes')
			if path in config['editor']['c_cpp_properties']['configurations'][0]['includePath']:
				config['editor']['c_cpp_properties']['configurations'][0]['includePath'].remove(os.path.join(trillian_root, '../../modules', module, 'includes'))
		path = os.path.join(project_root, '.vscode', 'c_cpp_properties.json')
		with open(path, 'w') as file:
			json.dump(config['editor']['c_cpp_properties'], file, indent=4)

def version():
	if not config['meta'] or not config['meta']['version']:
		raise Exception(f'Could not find version.')
	version = config['meta']['version']
	print(f'trillian-v{version}')

# resolve command
match COMMAND:
	case 'help':
		help()
	case 'init':
		init()
	case 'build':
		build()
	case 'run':
		run()
	case 'norm':
		norm()
	case 'install' | 'add':
		install()
	case 'uninstall' | 'remove':
		uninstall()
	case 'version':
		version()
	case _:
		print("Huh?! Try 'trillian help'.")
