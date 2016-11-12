#include <stdio.h>

int main(){
	int SIZE;
	scanf("%d",&SIZE);
	int stata, colvo, rating;
	char* string[SIZE];


	for(int i=0; i < SIZE; i++){
		scanf("%d %d", &colvo, &stata);
		int count = 0;
		for(int k=0; k < colvo; k++){
			scanf("%d", &rating);
			count += rating;
		}
		if(stata == (1500 + count)){
			string[i] = "Correct";
		}
		else string[i] = "Bug";
	}

	for(int i =0 ; i < SIZE; i++){
		printf("%s\n", string[i]);
	}


	return 0;
}