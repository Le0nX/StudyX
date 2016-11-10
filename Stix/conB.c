#include <stdio.h>

int main(){

	int SIZE, operation, temp;
	char string[8];
	int count=0;
	scanf("%d" ,&SIZE);

	char itog[SIZE];
	int itogop[SIZE];

for (int i=0; i < SIZE; i++){

	scanf("%s %d",string, &operation);
	itog[i]=string[0];
	itogop[i]=operation;
	//printf("%d\n", itogop[i]); //DEBUG
}

for (int k =0; k < SIZE; k++){

	switch(string[k]){
		case 'A': for(int i=1; i <= 100; i++){
			temp = i + itogop[k];
			if(temp < 0 || temp > 100){
				count++;
			}
		}
		break;

		case 'S': for(int i=1; i <= 100; i++){
			temp = i - itogop[k];
			if(temp < 0){
				count++;
			}
		}
		break;

		case 'M': for(int i=1; i <= 100; i++){
			temp = i * itogop[k];
			if(temp < 0 || temp > 100){
				count++;
			}
		}
		break;

		case 'D': for(int i=1; i <= 100; i++){
			//if(itogop[k]==0){
			//	printf("looool\n"); //DEBUG
			//}
			temp = i % itogop[k];
			if(temp != 0 || temp > 100){
				count++;
			}
		}
		break;
	}
}
	printf("%d\n",count);

	return 0;
}