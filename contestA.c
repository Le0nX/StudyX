#include <stdio.h>
#include <math.h>

long double f1(int x, long int *a,long int *b){
	return (pow(*a,x)-pow(*b,x));
}


int main(){
	long int a,b;
	scanf("%ld %ld", &a, &b);

	long double B = f1(1,&a,&b)/f1(-1,&a,&b);
	long double A = (f1(0,&a,&b)-B*f1(-2,&a,&b))/f1(-1,&a,&b);

	printf("%.0Lf %.0Lf %.0Lf %.0Lf",f1(0,&a,&b), f1(1,&a,&b), A, B);


	return 0;
}