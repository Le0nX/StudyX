#!/bin/bash

echo "Is it morning? Enter yes or no."
read answer

case "$answer" in
	yes | Yes | YES | y ) 
			echo "Good morning"
			echo "Bright morning"
			;;
	[nN]* ) 
			echo "Good afternoon"
			;;
	* )		
			echo "Sorry. Enter yes or no."
			exit 1
			;;
esac
exit 0
