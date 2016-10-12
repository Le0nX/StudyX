#!/bin/bash

gdialog --title "Questionnaire" --msgbox "Welcome" 9 18

gdialog --title "Confirm" --yesno "Are you going to take a part?" 9 18
if [ $? != 0 ]
then
	gdialog --infobox "Thank you anyway" 5 20
	sleep 2
	gdialog clear
	exit 0
fi

gdialog --title "Questionnaire" --inputbox "Enter your name." 9 30 2>1.txt 
Q_NAME=$(cat 1.txt)

gdialog --menu "$Q_NAME, what music do you like best?" 15 30 4 1 "Classical" 2 "Jazz" 3 "Country" 4 "Hip-Hop" 2>1.txt 
Q_MUSIC=$(cat 1.txt)

case $Q_MUSIC in
	1 ) gdialog --msgbox "You like Classic, man :)" 9 18;;
	2 ) gdialog --msgbox "Oh, Jazz, yeah!" 9 18;;
	3 ) gdialog --msgbox "Mmm, country" 9 18;;
	4 ) gdialog --msgbox "Word up son, word" 9 18;;
	* ) gdialog --msgbox "Seems there is a error..." 9 18;;
esac

sleep 2
gdialog --clear
exit 0