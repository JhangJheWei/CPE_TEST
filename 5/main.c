#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sentences[100][100];
	int row = 0;
	int column = 0;
	//Row ¥s¦C(¾î)¡BColumn ¥s¦æ(ª½ªº)
	while(gets(sentences[row])){
		if (column > strlen(sentences[row])){
			column = column;
		}else{
			column = strlen(sentences[row]);
		}
		row++;
	}
	for(int i=0;i<column;i++){
		for(int j=row-1;j>=0;j--){
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
	return 0;
}
