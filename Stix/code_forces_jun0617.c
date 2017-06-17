#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
    
    FILE *in;
    FILE *out;
    
    //int r = 0;
    char text[1025];
    char strings[30][1025];
    char word[30][51];
    int i,l, k = 0;
    
    out = fopen("nenokku_easy.out","w");
    if (out == NULL){
		
        printf("ERR while open2");
        return -1;
        
    }
    
    in = fopen("nenokku_easy.in", "r");
    if (in == NULL){
		
        printf("ERR while open");
        return -1;
        
    } else {
		while (fgets(text, 1024, in) != NULL){
			if (text[0] == '?'){
				if (i != 0){
				
					strncpy(word[k], &text[2], strlen(text)-3);
					word[k][strlen(text)-2] = '\0';
						for(l = 0; word[k][l]; l++){
							word[k][l] = tolower(word[k][l]);
						}
					int p;
					for (p=0; p < i; p++){
						if(strstr(strings[p], word[k]) != NULL) {
							fprintf(out, "%s\n", "YES");
							break;
							
						} else {
							fprintf(out, "%s\n", "NO");
						}
					}
				k++;
				} else {
					
					fprintf(out, "%s\n", "NO");
					
				}
				
			} else if (text[0] == 'A') {
				
				strncpy(strings[i], &text[2], strlen(text)-3);
				strings[i][strlen(text)-2] = '\0';
				
				for(l = 0; strings[i][l]; l++){
					strings[i][l] = tolower(strings[i][l]);
				}
			
			i++;
			}
		}
    } 
                
	return 0;
}
