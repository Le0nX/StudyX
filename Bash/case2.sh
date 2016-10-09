#!/bin/bash

echo "Is it morning? Enter yes or no."
read $answer

case "$answer" in 
	yes | y | Yes | Yes ) echo "Goog morning";;
	no | n | No | NO ) echo "Good afternoon";;
	* ) echo -e '\a'
		echo "Sory try again"
		exit 1
		;;
esac
exit 0