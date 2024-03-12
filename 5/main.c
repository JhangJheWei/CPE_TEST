#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char line[101][101];
	int n=0,length[101],i,j;
	int maxLen=0,upbound;
	while(gets(line[n])){
		length[n]=(int)strlen(line[n]);
		if(length[n]>maxLen)maxLen=length[n];
		n++;
	}
	for(j=0;j<maxLen;j++){
		upbound=0;
		while(j>=length[upbound])upbound++;
		for(i=n-1;i>=upbound;i--){
			if(j<length[i])
				putchar(line[i][j]);
			else
				putchar(' ');
		}
		printf("\n");
	}
	return 0;
}

/*
char sentences[100][100];
	int row = 0;
	int column = 0;
	int i,j = 0;
	//Row ¥s¦C(¾î)¡BColumn ¥s¦æ(ª½ªº)
	while(gets(sentences[row])){
		if (column > strlen(sentences[row])){
			column = column;
		}else{
			column = strlen(sentences[row]);
		}
		row++;
	}
	for(i=0;i<column;i++){
		for(j=row-1;j>=0;j--){
			if(i>=strlen(sentences[j])){
				if(j!=0){
					printf(" ");
				}else{
					printf("");
				}
			}else{
				printf("%c", sentences[j][i]);
			}
		}
		printf("\n");
	}
*/
