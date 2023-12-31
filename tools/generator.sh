#!/bin/bash

#Use set -x if you want to echo each command while getting executed
#set -x

echo -n "Creating a dmg file..."

#Save current directory so we can restore it later
cur=$PWD
#Save command line arguments so functions can access it
args=("$@")

#Put your code in this function
#To access command line arguments use syntax ${args[1]} etc
function dir_command {
    #This example command implements doing git status for folder
    cd $1
    echo "$(tput setaf 2)$1$(tput sgr 0)"
    git tag -a ${args[0]} -m "${args[1]}"
    git push --tags
    cd ..
}

#This loop will go to each immediate child and execute dir_command
find . -maxdepth 1 -type d \( ! -name . \) | while read dir; do
   dir_command "$dir/"
done

#This example loop only loops through give set of folders    
declare -a dirs=("dir1" "dir2" "dir3")
for dir in "${dirs[@]}"; do
    dir_command "$dir/"
done

#Restore the folder
cd "$cur"