#include <stdio.h>
typedef enum{false, true} bool;

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
	fclose(in);

	bool up=false;
	bool down=false;
	int bugor=0;
	if(fall[0]<fall[1])
		up = true;
	else down = true;

	for(int i=0; i < SIZE-1; i++){
		if(fall[i]<fall[i+1]){
			up = true;
		} else down = true;

		if(up && down){
			bugor++;
			up=false;
			down=false;
		}
	}

	out = fopen("skateboard.out", "w");
	fprintf(out, "%d\n",bugor);
	fclose(out);

	return 0;
}