#include <stdio.h>
#include <stdlib.h>

struct node {
	int size;
	int *x;
	char *name;
};

int main(){
	
	struct node *ptr, nodka;
	
	ptr = &nodka;
	
	ptr->x = (int *)malloc(sizeof(int));
	
	scanf("%d", &*(ptr->x));
	printf("\nResult: %d", *(ptr->x)); 
	
	return 0;
}
