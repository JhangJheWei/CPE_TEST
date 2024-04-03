#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int compare( const void *a, const void *b){
	return( strcmp((char *)a,(char *)b) );
}

int main(int argc, char *argv[]) {
	char data[10000][32] = {0};
	int i,ans,number,count=0;
	
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
			for(i=0;i<=count;i++){
				printf("ans:%d\n", ans);
				printf("count:%d\n", count);
				printf("data[i]:%s\n", data[i]);
				printf("data[i-1]:%s\n", data[i-1]);
				ans++;
				if(strcmp(data[i-1],data[i])!=0){
					printf("%s %f\n",data[i-1],(ans/count));
					ans=0;
				}
			}
			/*for(i=0;i<sizeof(10);i++){
				printf("data:%s\n", data[i]);
			}*/
			number--;
		}
	}
	return 0;
}
