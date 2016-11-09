#include <stdio.h>

int main(){

	FILE *in;
	FILE *out;
	int SIZE;
	in = fopen("skateboard.in", "r");
	fscanf(in, "%d", &SIZE);
	int fall[SIZE];
	for (int i=0; i <= SIZE; i++){
		fall[i]=0;
	}
	for (int i=0; i <SIZE; i++){
		fscanf(in, "%d", &fall[i]);
	}

	for (int i=0; i < SIZE; i++){
		printf("%d\n",fall[i]);
	}

	return 0;
}