# ft_modules

This is how ft_modules is going to work:

First the user should manually install `trillian`, the tool to manage modules. Just get the release and create an alias to it.
Trillian will keep a local repository of installed modules and will use them to compile the projects
that requires them.

BUILD

will copy every time to submit?
Nope. Check timestamps. Compare from the folder submit to the original. See if the original is newer. If it is copy it.

for each source and includes file in each dependency see if it is newer.
for each source in the current project see if it is newer.

for each source and headers under submit check if the original was deleted. if it was delete under submit and delete the matching object file. and delete all dependency files to avoid errors.

then generate makefile if anything changed

check the mode and generate makefile accordingly

if the mode changed delete all object and dependency files

and run make

trillian run <args>

there are no tests. if you want to have tests build a separate project just for testing.

should work

---

trillian submit

should check the norm, should build in default mode (change the mode in the script and call build), should run make fclean and 
should submit to vogsphere based on the link in the config