#include <stdio.h>

int main(){

	char string[100];
	char ch;
	int count=0;
	while((ch=getchar())!='\n'){
		string[count]=ch;
		count++;
	}

	string[count+1]='\0';
	int complexity = 0;
	int i;
	for(i=0; string[i] != '\0'; i++){ //отдельная буква
		for(int k=0;string[k] != '\0'; k++){ // пул 
			if(string[i]==string[k] && k!=i){
				complexity++;
			}
		}
	}

	int unic_povtor=0;
	for(i=0; string[i] != '\0'; i++){ //отдельная буква
		for(int k=0;string[k] != '\0'; k++){ // пул 
			if(string[i]==string[k] && k!=i){
				unic_povtor++;
				break;
			}
		}
	}

	int real_complex = i-unic_povtor;
	if(real_complex > 2){
		printf("%d\n", real_complex-2);
	}
	else if(real_complex == 1 || real_complex == 2)
		printf("%d\n",real_complex);
	else printf("%d\n", 0);
	


	return 0;
}