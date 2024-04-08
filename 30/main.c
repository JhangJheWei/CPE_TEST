#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long x;
	while(scanf("%lld",&x)!=EOF){
		char c[1024]={0};
		long long a[1024]={0},ans=0;
		int n=0,i;
		char *p;
		gets(c);
		gets(c);
		p=strtok(c," ");
		while(p!=NULL){
			a[n]=atoi(p);
			n++;
			p=strtok(NULL," ");
		}
		for(i=n-2;i>=0;i--){
			ans=ans+a[n-2-i]*(i+1)*pow(x,i);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
