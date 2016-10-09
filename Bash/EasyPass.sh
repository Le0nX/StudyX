#/bin/bash

echo "Wnter password"
read pass

while [ "$pass" != "secret" ]
do
	echo -e '\a'
	echo "Sorry. Try again"
	read pass
done
exit 0