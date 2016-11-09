#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	long long int C;
	long long int A,B;

	FILE *in;
	FILE *out;

	in = fopen("apbtest.in", "r");
	fscanf(in,"%lld", &C);
	fclose(in);

	srand(time(NULL));
	A = rand() % 1000;
	B = C - A;

	out = fopen("apbtest.out", "w");
	fprintf(out, "%lld %lld\n", A, B);
	fclose(out);
	return 0;	
}