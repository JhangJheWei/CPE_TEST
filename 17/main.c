#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int datas[2] = {0};
	int v,t=0;
	
	while(scanf("%d %d", &datas[0], &datas[1]) != EOF){
		if(-100<=datas[0]<=100){
			v = datas[0];
		}
		if(0<=datas[1]<=200){
			t = datas[1];
		}
		printf("%d\n", 2*v*t);
		//printf("%d %d\n", datas[0], datas[1]);
	}
	return 0;
}
