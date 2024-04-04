#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int compare( const void *a, const void *b){
	return( strcmp((char *)a,(char *)b) );
}

int main(int argc, char *argv[]) {
	char data[10000][32] = {0};
	int i,number,count=0;
	float ans = 0;
	
	while(scanf("%d", &number) != EOF){
		if(number != 0){
			scanf("\n\n");
			memset(data, 0, sizeof(data));
			count=0;
			while(gets(data[count]) != NULL){
				//printf("%d\n", strlen(data[count]));
				if(strlen(data[count])==0){
					break;
				}
				count++;
			}
			qsort(data, count, sizeof(data[0]), compare);
			strcpy(data[count],"");
			for(i=1;i<=count;i++){
				ans++;
				if(strcmp(data[i-1],data[i])!=0){
					printf("%s %.4f\n",data[i-1],(ans/count)*100);
					ans=0;
				}
			}
			if(number>1){
				printf("\n");	
			}
			number--;
		}
	}
	return 0;
}
