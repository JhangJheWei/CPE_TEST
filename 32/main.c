#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char noises[] = {'c','d','e','f','g','a','b','C','D','E','F','G','A','B'};
	int number = 0;
	int data[11] = {0};
	char input_data = "";
	int i,j=0;
	
	while(scanf("%d", &number) != EOF){
		while(number--){
			gets(input_data);
			for(i=0;i!='\0';i++){
				for(j=0;j<sizeof(noises);j++){
					if(input_data[i] == noises[j]){
					}
				}
			}
		}
	}
	return 0;
}
