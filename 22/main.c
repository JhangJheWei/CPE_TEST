#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long data,test_data,divide=0;
	int flag = 0;
	
	while(scanf("%lld %lld", &data, &divide) != EOF){
		flag = 0;
		test_data = data;
		if((data>=divide) && (divide >= 2)){
			for(;test_data>1;test_data/=divide){
				if((test_data%divide) != 0){
					flag = 1;
					printf("Boring!\n");
					break;
				}
			}
			if(flag == 0){
				printf("%lld", data);
				data/=divide;
				for(;data>=1;data/=divide){
					printf(" %lld", data);
				}
				printf("\n");
			}	
		}else{
			printf("Boring!\n");
		}
	}
	return 0;
}
