#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long data_1,data_2 = 0;
	while(scanf("%lld %lld", &data_1, &data_2) != EOF){
		printf("%lld\n", labs(data_1-data_2));//瘋狂程式不用labs而是用abs 
	}
	return 0;
}
