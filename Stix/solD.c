#include <stdio.h>

int main(){
	FILE *in;
	FILE *out;
	long long int x,y, res;


	in = fopen("gcd.in","r");
	fscanf(in, "%lld %lld", &x, &y);
	fclose(in);
	
	
	while(x){
		res = x;
		x = y%x;
		y = res;
	}
	
	out = fopen("gcd.out", "w");
	fprintf(out, "%lld\n",y);

	return 0;	
}