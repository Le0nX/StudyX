#!/bin/bash

salutation="Hello"
echo salutation
echo "the program $0 is now running"
echo "the second parameter was $2"
echo "the first parameter was $1"
echo "the parameter list: $@"
echo "the user's home folder is $HOME"
echo "please enter new greeting: "
read salutation

echo $salutation
echo "end of the script"
exit 0
