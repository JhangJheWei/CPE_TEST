#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m = 0;
	char bombom[102][102] = {0};
	char map_number[102][102] = {0};
	int i,j,k,l,count = 0;
	count = 1;
	
	while(scanf("%d %d", &n, &m) != EOF){
		if((n==0) && (m==0)){
			exit(0);
		}
		memset(bombom,0,sizeof(bombom));
		memset(map_number,0,sizeof(map_number));
		for(i=0;i<=n;i++){
			gets(&bombom[i][1]);
		}
		for(i=0;i<=n;i++){
			for(j=0;j<=m;j++){
				if(bombom[i][j] == '*'){
					for(k=i-1;k<=i+1;k++){
						for(l=j-1;l<=j+1;l++){
							if((k == i) && (l == j)){
								map_number[k][l] = '*';
							}else{
								map_number[k][l]++;
							}	
						}
					}
				}
			}
		}
		if(count > 1){
			printf("\n");
		}
		printf("Field #%d:\n", count);	
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				if(bombom[i][j] == '*'){
					printf("%c", bombom[i][j]);	
				}else{
					printf("%d", map_number[i][j]);
				}
			}
			printf("\n");
		}
		count++;
	}
	return 0;
}
