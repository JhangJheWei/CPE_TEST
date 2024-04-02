#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//toupper

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char keyboard[] = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char data;
	int i,j=0;
	
	while(scanf("%c", &data) != EOF){
		if((data == 32) || (data == 10)){
			printf("%c", data);
		}else{
			for(i=0;i<sizeof(keyboard);i++){
				if(tolower(data) == keyboard[i]){
					printf("%c", keyboard[i-2]);
				}
			}
		}
		//printf("\n");
	}
	
	/*while(gets(data) != NULL){
		for(i=0;i<sizeof(data);i++){
			if(data[i] != NULL){
				//printf("data:%c\n", data[i]);
				if(data[i] != ' '){
					printf("tolower:%c\n", tolower(data[i]));
					for(j=0;j<sizeof(keyboard);j++){
						if(tolower(data[i]) == keyboard[j]){
							printf("%c\n", keyboard[j-2]);
						}
					}	
				}else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}*/
	return 0;
}
/*
k[r dyt i[o
p '[nt ]y[jyd.
k[r g[ i[o g[
i[o g[
*/
