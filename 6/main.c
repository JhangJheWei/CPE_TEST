#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f[40]={0,1},n,i,x,j;
	for(i=2;i<=39;i++){
		f[i]=f[i-1]+f[i-2];
	}
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		printf("%d = ",x);
		j=39;
		while(x<f[j]){
			j--;
		}
		while(j>=2){
			if(x>=f[j]){
				printf("1");x=x-f[j];
			}
			else{
				printf("0");
			}
			j--;
		}
		printf(" (fib)\n");
	}
	return 0;
}
