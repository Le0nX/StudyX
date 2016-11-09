#include <stdio.h>

int fibos(int x){
	switch(x){
		case 0: return 0;
		break;
		case 1: return 1;
		break;
		case 2: return 2;
		break;
	}

	return (fibos(x-2) + fibos(x-1));
}

int main(){
	FILE *in;
	FILE *out;

	int fibo;

	in = fopen("fib.in", "r");
	fscanf(in, "%d", &fibo);
	fclose(in);
	
	int res = fibos(fibo);

	out = fopen("fib.out", "w");
	fprintf(out, "%d\n",res);
	fclose(out);

	return 0;
}