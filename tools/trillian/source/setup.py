import os
import sys
import json

# get trillian_root
trillian_root = os.environ.get('TRILLIAN_ROOT')
if (trillian_root[-1] != '/'):
	trillian_root += '/'

# get args
arguments = sys.argv
if len(sys.argv) <= 1:
	command = "help"
else:
	command = arguments[1]

# get config
config = {}
names = [
	'trillian',
	'user',
	'meta'
]
paths = [
	os.getcwd() + '/' + 'config/trillian.json',
	trillian_root + 'config/' + 'user.json',
	trillian_root + 'config/' + 'meta.json'
]
if len(names) != len(paths):
	raise Exception('There is something wrong.')
for index in range(len(names)):
	name = names[index]
	path = paths[index]
	if os.path.exists(path):
		with open(path) as file:
			data = json.load(file)
	else:
		raise Exception(f'File {path} does not exist.')
	config[name] = data
paths = None

# get project_root
project_root = None
if config['trillian']['type'] == 'project':
	project_root = os.getcwd()

# get list_of_modules
path = os.path.join(trillian_root, '../../modules')
list_of_modules = os.listdir(path)