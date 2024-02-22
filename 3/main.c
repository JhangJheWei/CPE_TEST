#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char data;
	int count = 0;
	while(scanf("%c", &data) != EOF){
		if(data == '"'){
			count += 1;
			if( (data == '"') && ((count % 2) != 0) ){
				printf("``");
			}
			else if( (data == '"') && ((count % 2) == 0) ){
				printf("''");
			}
		}else{
			printf("%c", data);	
		}
	}
	return 0;
}
