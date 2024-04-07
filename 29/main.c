#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[1001]={0},b[1001]={0};
	while(scanf("%s %s",&a,&b)!=EOF){
		int ca[26]={0},cb[26]={0},i,j;
		for(i=0;a[i]!=0;i++){
			ca[a[i]-'a']++;
		}
		for(i=0;b[i]!=0;i++){
			cb[b[i]-'a']++;
		}
		for(i=0;i<26;i++){
			for(j=0;j<ca[i]&&j<cb[i];j++){
				printf("%c",i+'a');
			}
		}
		printf("\n");
	}
	return 0;
}
