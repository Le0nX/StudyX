#!/bin/bash

#first
#просматриваем все файлы в текущем каталоге
#для поиска строки POSIX ,а затем выводим имена файлов

for file in *
do
	if grep -q POSIX $file
	then
		echo $file
	fi
done

exit 0
