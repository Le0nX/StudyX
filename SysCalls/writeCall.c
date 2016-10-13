#include <stdio.h>
#include <unistd.h>

int main(){

	if(write(1, "Here is some data\n", 18) != 18){
		write(2, "Error occured on file descriptor 1\n", 35);
	}

	return 0;
}