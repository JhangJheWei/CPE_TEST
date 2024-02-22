#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[100];
	int count=0;
	while(gets(a)!=NULL)
	{
		int i;
		for(i=0;a[i]!=0;i++)
		{
			if(a[i]=='"'&&count==0){
				printf("``");count=1;
			}
			else if(a[i]=='"'&&count==1){
				printf("''");count=0;
			}
			else{
				printf("%c",a[i]);
			}
		}
		printf("\n");
	}
return 0;

}
