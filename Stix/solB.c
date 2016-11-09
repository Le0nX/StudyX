#include <stdio.h>

int main(){
	long long int A,B;
	FILE *in;
	FILE *out;

	in = fopen("product.in","r");
	if(in == NULL)
		printf("error opening .in\n");
	else fscanf(in,"%lld %lld", &A, &B);
	fclose(in);

	out = fopen("product.out", "w");
	if(out == NULL)
		printf("error opening .out\n");
	else fprintf(out, "%lld\n",A*B );
	fclose(out);

	return 0;
}