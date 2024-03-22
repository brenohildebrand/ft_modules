import os
import json
import shutil
import textwrap
from setup import trillian_root, project_root, command, config

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

			\033[1mnorm:\033[0m
			Checks for norm errors.
		
		May your code be bug free. Bye!
	""").strip('\n'))

def init():
	os.makedirs('build')
	os.makedirs('config')
	os.makedirs('docs')
	os.makedirs('modules')
	os.makedirs('source')
	os.makedirs('tests')

def norm():
	pass

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

	# copy newer and non-existent for modules
	def copy_headers_that_are_newer(dependency):
		path = trillian_root + '../../modules/' + dependency + '/' + 'includes/'
		original_paths = []
		submit_paths = []
		for root, dirs, files in os.walk(path):
			for file in files:
				original_paths.append(root + file);
				submit_paths.append(project_root + '/submit' + '/' + dependency + '/' + file);
		for original_path, submit_path in zip(original_paths, submit_paths):
			if os.path.exists(submit_path) == False:
				shutil.copyfile(original_path, submit_path)
			else:
				original_timestamp = os.path.getmtime(original_path)
				submit_timestamp = os.path.getmtime(submit_path)
				if submit_timestamp < original_timestamp:
					print("Newer.")
					shutil.copyfile(original_path, submit_path)

	def copy_sources_that_are_newer(dependency):
		path = trillian_root + '../../modules/' + dependency + '/' + 'source/'
		original_paths = []
		submit_paths = []
		for root, dirs, files in os.walk(path):
			for file in files:
				original_paths.append(os.path.join(root, file));
				submit_paths.append(project_root + '/submit' + '/' + dependency + '/' + file);
		print(original_paths)
		# for original_path, submit_path in zip(original_paths, submit_paths):
		# 	if os.path.exists(submit_path) == False:
		# 		shutil.copyfile(original_path, submit_path)
		# 	else:
		# 		original_timestamp = os.path.getmtime(original_path)
		# 		submit_timestamp = os.path.getmtime(submit_path)
		# 		if submit_timestamp < original_timestamp:
		# 			print("Newer.")
		# 			shutil.copyfile(original_path, submit_path)

	def copy_headers_and_sources_that_are_newer(dependencies):
		for dependency in dependencies:
			path = project_root + '/submit' + '/' + dependency
			if os.path.exists(path) == False:
				os.makedirs(path)
		for dependency in dependencies:
			copy_headers_that_are_newer(dependency)
			copy_sources_that_are_newer(dependency)

	copy_headers_and_sources_that_are_newer(dependencies_set)

	# copy newer and non-existent for the project

	# check for deleted files and update submit accordingly
	# if there's at least one delete all .d files

	# generate makefile for the chosen mode

	# run make

def install():
	# just add a dependency to the list of dependencies
	# json.dump(config['trillian'], file, indent=4)
	pass

def uninstall():
	# just remove a dependency from the list of dependencies
	# json.dump(config['trillian'], file, indent=4)
	pass

def version():
	if not config['meta'] or not config['meta']['version']:
		raise Exception(f'Could not find version.')
	version = config['meta']['version']
	print(f'trillian-v{version}')

# resolve command
match command:
	case 'help':
		help()
	case 'init':
		init()
	case 'norm':
		norm()
	case 'build':
		build()
	case 'install':
		install()
	case 'uninstall':
		uninstall()
	case 'version':
		version()
	case _:
		print("Huh?! Try 'trillian help'.")
