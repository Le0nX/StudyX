#include <stdio.h>

int main(){

	int count;
	int Margarita=0;
	int Gavaya=0;
	int rad;

	scanf("%d", &count);
	int broski[count*4];

	for(int i=0; i < count*4; i++){
		scanf("%d",&broski[i]);
	}

	scanf("%d", &rad);


	for(int i=0; i < count*4;i+=2 ){


		if(broski[i]==rad && broski[i+1]==0){ // центр и сектор1
			Gavaya-=300;
			continue;
		}
		else if(broski[i]==(-rad) && broski[i+1]==0){ // центр и сектор2
			Gavaya-=300;
			continue;
		}
		else if(broski[i+1]==rad && broski[i]==0){ // центр и сектор3
			Gavaya-=300;
			continue;
		}
		else if(broski[i+1]==(-rad) && broski[i]==0){ // центр и сектор4
			Gavaya-=300;
			continue;
		}
		else if(broski[i]==rad || broski[i+1]==rad){
			Gavaya-=100;
			continue;
		}
		else if(broski[i]>rad || broski[i+1]>rad){
			continue;
		}
		else if(broski[i]==0 && broski[i+1]==0){ //центр
			Gavaya-=240;
			continue;
		}
		else if(broski[i]==0 || broski[i+1]==0){ //границы
			Gavaya-=200;
			continue;
		}
		else if(broski[i]>0 && broski[i+1]>0){
			Gavaya+=50;
			continue;
		}
		else if(broski[i]>0 && broski[i+1]<0){
			Gavaya+=400;
			continue;
		}
		else if(broski[i]<0 && broski[i+1]>0){
			Gavaya+=100;
			continue;
		}
		else if(broski[i]<0 && broski[i+1]<0){
			Gavaya+=10;
			continue;
		}
		else {printf("error\n");
		}
	}

	for(int i=2; i < count*4;i+=2 ){


		if(broski[i]==rad && broski[i++]==0){ // центр и сектор1
			Margarita-=300;
			continue;
		}
		else if(broski[i]==(-rad) && broski[i++]==0){ // центр и сектор2
			Margarita-=300;
			continue;
		}
		else if(broski[i++]==rad && broski[i]==0){ // центр и сектор3
			Margarita-=300;
			continue;
		}
		else if(broski[i++]==(-rad) && broski[i]==0){ // центр и сектор4
			Margarita-=300;
			continue;
		}
		else if(broski[i]==rad || broski[i++]==rad){
			Margarita-=100;
			continue;
		}
		else if(broski[i]>rad || broski[i++]>rad){
			continue;
		}
		else if(broski[i]==0 && broski[i++]==0){ //центр
			Margarita-=240;
			continue;
		}
		else if(broski[i]==0 || broski[i++]==0){ //границы
			Margarita-=200;
			continue;
		}

		else if(broski[i]>0 && broski[i++]>0){
			Margarita+=50;
			continue;
		}
		else if(broski[i]>0 && broski[i++]<0){
			Margarita+=400;
			continue;
		}
		else if(broski[i]<0 && broski[i++]>0){
			Margarita+=100;
			continue;
		}
		else if(broski[i]<0 && broski[i++]<0){
			Margarita+=10;
			continue;
		}

	}
	if(Margarita>Gavaya){
		printf("Margarita %d\n",Margarita );
	}
	else printf("Gavaya %d\n",Gavaya );


	printf("Margarita %d\n",Margarita );
	return 0;
}