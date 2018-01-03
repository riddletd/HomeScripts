
############################################
# 
# Used to create a directory and then go 
# into the directory after creation with
# one command.
#
# Author: Trevor Riddle
# Date: May 5, 2017
#
############################################ 

source ~/bin/mkdirAndGoInto.sh
mkdir "$1"
cd "$PWD/$1"