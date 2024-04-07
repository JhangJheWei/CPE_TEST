#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char data1[1000] = {0};
	char data2[1000] = {0};
	int i,j,k,count=0;
	char el[29] = {0};
	char test[] = "1abcdefghijklmnopqrstuvwxyz1";
	
	while(gets(data1) != NULL && gets(data2) != NULL){
		k = 1;
		for(i=0;i<sizeof(data1);i++){
			if(data1[i] > 0){
				for(j=0;j<sizeof(data2);j++){
					if(data2[j] > 0){
						if(data1[i] == data2[j]){
							//printf("%c", data1[i]);
							for(k=1;k<27;k++){
								if(data1[i] == test[k]){
									el[k] += 1;
								}
							}
						}
					}
				}
			}
		}
		for(k=1;k<27;k++){
			for(;el[k]>0;el[k]--){
				printf("%c", test[k]);
			}
		}
		printf("\n");
		memset(data1, 0 ,sizeof(data1));
		memset(data2, 0 ,sizeof(data2));
		memset(el, 0 ,sizeof(el));	
	}
	return 0;
}
