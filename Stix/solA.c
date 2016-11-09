#include <stdio.h>

int main(){
   	FILE *in;
   	FILE *out;	
   	long int A,B;
   	in = fopen("sum.in","r");
   	if(in == NULL){
   		printf("Error while open\n");
   	} else {
   		fscanf(in, "%ld %ld",&A, &B);
   	}
   	fclose(in);

   	out = fopen("sum.out", "w");
   	if(out == NULL){
   		printf("out open problem\n");
   	} else fprintf(out,"%ld\n",A+B);

    return 0;
}