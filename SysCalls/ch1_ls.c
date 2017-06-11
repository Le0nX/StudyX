#include "apue.h"
#include <dirent.h>

int main(int argc, char **argv)
{
	DIR 			*dp;
	struct dirent 	*dirp;
		
	/* 
	 * opendir returns pointer to DIR
	 * structure. 
	 */
	
	if (argc != 2){
		
		if ((dp = opendir(".")) == NULL) 
			err_sys("Unable to open %s", argv[1]);
	
	} else {
		
		if ((dp = opendir(argv[1])) == NULL) 
			err_sys("Unable to open %s", argv[1]);
		
	}
		
	
	while ((dirp = readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);
		
	closedir(dp);
	return 0;
}
