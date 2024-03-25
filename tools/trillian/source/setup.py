import os
import sys
import json

# This script is used to setup multiple important variables for Trillian.

def get_trillian_root():
	TRILLIAN_ROOT = os.environ.get('TRILLIAN_ROOT')
	if TRILLIAN_ROOT == None:
		raise Exception('TRILLIAN_ROOT is not set.')
	return (TRILLIAN_ROOT)

def get_arguments():
	return (sys.argv)

def get_command():
	if len(ARGUMENTS) <= 1:
		COMMAND = "help"
	else:
		COMMAND = ARGUMENTS[1]
	return (COMMAND)

def get_project_root():
	return (os.getcwd())

def get_config():
	CONFIG = {}
	if COMMAND == 'init':
		return (CONFIG)
	keys = [
		'trillian',
		'user',
		'meta'
	]
	paths = [
		PROJECT_ROOT + '/config/trillian.json',
		TRILLIAN_ROOT + '/config/user.json',
		TRILLIAN_ROOT + '/config/meta.json'
	]
	if len(keys) != len(paths):
		raise Exception('The number of keys and paths does not match.')
	for index in range(len(keys)):
		key = keys[index]
		path = paths[index]
		if os.path.exists(path):
			with open(path) as file:
				contents = json.load(file)
		else:
			raise Exception(f'File {path} does not exist.')
		CONFIG[key] = contents
	keys = None
	paths = None

	if not 'editor' in CONFIG['trillian']:
		CONFIG['trillian']['editor'] = None
	elif CONFIG['trillian']['editor'] == 'vscode':
		if not os.path.exists(os.path.join(PROJECT_ROOT, '.vscode')):
			os.mkdir(os.path.join(PROJECT_ROOT, '.vscode'))
		CONFIG['editor'] = {}
		if not os.path.exists(os.path.join(PROJECT_ROOT, '.vscode', 'c_cpp_properties.json')):
			CONFIG['editor']['c_cpp_properties'] = {}
		else:
			with open(os.path.join(PROJECT_ROOT, '.vscode', 'c_cpp_properties.json')) as file:
				contents = json.load(file)
			CONFIG['editor']['c_cpp_properties'] = contents
	return (CONFIG)

def get_modules():
	return (os.listdir(os.path.join(TRILLIAN_ROOT, '../../modules')))

TRILLIAN_ROOT = get_trillian_root()
ARGUMENTS = get_arguments()
COMMAND = get_command()
PROJECT_ROOT = get_project_root()
CONFIG = get_config()
MODULES = get_modules()