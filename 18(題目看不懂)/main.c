#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[1024]={0};
	while(scanf("%s",a)!=EOF){
		int mx=1,i,sum=0;
		for(i=0;a[i]!=0;i++){
			int x=0;
			if(a[i]>='0'&&a[i]<='9'){
				x=a[i]-'0';
			}
			else if(a[i]>='A'&&a[i]<='Z'){
				x=a[i]-'A'+10;
			}
			else if(a[i]>='a'&&a[i]<='z'){
				x=a[i]-'a'+36;
			}
			if(mx<x){
				mx=x;
			}
			sum=sum+x;
		}
		for(i=mx;i<=62;i++)	{
			if(sum%i==0){
				printf("%d\n",i+1);break;
			}
			if(i==62){
				printf("such number is impossible!\n");
			}
		}
	}
	return 0;
}
