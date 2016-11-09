#include <stdio.h>

int main(){

	int mass[4];
	for (int i=0; i < 4; i++){
		scanf("%d", &mass[i]);
	}

	for (int i=0; i < 4; i++){
		printf("%d\n", mass[i]);
	}

	return 0;
}