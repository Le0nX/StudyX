#!/bin/bash

#Denis Nefedov 2016
#You can take and change this code if you want


choise_menu=""
current_cd=""
title_file="title.cdb"
tracks_file="tracks.cdb"
temp_file=/tmp/cdb.$$
trap 'rm -f $temp_file' EXIT

get_return() {
	echo -e "Press return \c"
	read x
	return 0
}

get_confirm() {
	echo -e "Are you sure? \c"
	while :
	do
		read x
		case $x in 
			y | Y | yes | Yes | YES ) return 0;;
			n | N | no | No | NO ) echo "Cancelled" return 1;;
			* ) echo "Please enter yes or no";;
		esac
	done
}

set_menu() {
	clear
	echo "Options :-"
	echo
	echo "	a) Add new CD"
	echo "	f) Find new CD"
	echo "	c) Count all CD's and tracks in the catalog"
	if [ "$cdcatid" != "" ]
	then 
		echo "	l) List tracks on $cdtitle"
		echo "	r) Remove $cdtitle"
		echo "	u) Update track information for $cdtitle"
	fi
	echo "	q) Quit"
	echo
	echo -e "Please enter choice then press return \c"
	read menu_choice
	return 0
}

insert_title() {
	echo $* >> $title_file
	return
}

insert_track() {
	echo $* >> $tracks_file
	return
}

add_tracks() {
	echo "Enter track information for this CD"
	echo "When no more tracks enter q"
	cdtrack=1
	cdtitle=""
	while [ "$cdtitle" != "q" ]
	do
		echo -e "Track $cdtrack, track tittle? \c"
		read tmp
		cdtitle=${tmp%%, *}
		if [ -n "$cdtitle" ]
		then 
			echo "Sorry, no commands allowed"
			continue
		fi
		if [ -n "$cdtitle" ]
		then
			if [ "$cdtitle" != "q" ]
			then
				insert_track $cdcatid, $cdtrack, $cdtitle
			fi
		else
			cdtrack=$((cdtrack-1))
		fi
	cdtrack=$((cdtrack+1))
done 
}

add_records() {
	echo -e "Enter catalog name \c"
	read tmp
	cdcatid=${tmp%%, *}

	echo -e "Enter tittle \c"
	read tmp
	cdtitle=${tmp%%, *}

	echo -e "Enter type \c"
	read tmp
	cdtype=${tmp%%, *}

	echo -e "Enter artist/composer \c"
	read tmp
	cdac=${tmp%%, *}

	echo About to add new entry
	echo $cdcatid, $cdtitle, $cdtype, $cdac

	if get_confirm
	then
		insert_title $cdcatid, $cdtitle, $cdtype, $cdac
		add_tracks
	else
		remove_records
	fi

	return
}