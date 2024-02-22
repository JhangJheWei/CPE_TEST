#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pieces_count = 0;
	int i,j,k=0;
	int test,test_1,test_2=0;
	char data[100][100] = {0};
	int en[26];
	int number=0;
	int temp_int=0;
	char tmp_char;
	//char english[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char english[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(scanf("%d", &pieces_count) != EOF){
		for(i=0;i<=pieces_count;i++){
			gets(data[i]);
		}
		for(i=0;i<=pieces_count;i++){
			for(j=0;j<strlen(data[i]);j++){
				test = data[i][j];
				number=0;
				for(k=65;k<91;k++){
					if(test==k){
						en[number] = en[number] + 1;
					}
					number++;
				}
				number=0;
				for(k=97;k<123;k++){
					if(test==k){
						en[number] = en[number] + 1;
					}
					number++;
				}
			}
		}
		for(i=0;i<26;i++){
			for(j=i;j<26;j++){
				if(en[i] < en[j]){
					temp_int = en[i];
					en[i] = en[j];
					en[j] = temp_int;
					tmp_char = english[i];
					english[i] = english[j];
					english[j] = tmp_char;
				}
				if(en[i] == en[j]){
					test_1 = english[i];
					test_2 = english[j];
					if(test_1 > test_2){
						tmp_char = english[i];
						english[i] = english[j];
						english[j] = tmp_char;	
					}
				}
			}
		}
		for(i=0;i<strlen(english);i++){
			if(en[i] != 0){
				printf("%c ", english[i]);
				printf("%d\n", en[i]);	
			}
		}
	}
	return 0;
}
