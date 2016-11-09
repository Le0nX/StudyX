#include <string.h>
#include "solution.h"

int stringStat(const char *string, size_t multiplier, int *count){
	int i=0;
	int length =0;
	while(string[i]!=0){
		length++;
		i++;
	}

	(*count)++;

	return length*multiplier;

}
