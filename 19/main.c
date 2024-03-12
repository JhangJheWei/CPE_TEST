#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long data,temp1,temp2 = 0;
	int count = 1,flag = 0;
	while(scanf("%lld", &data) != EOF){
		if(data >= 10000000){
			temp1 = data/10000000;
			temp2 = data%10000000;
			//printf("temp1:%lld\n", temp1);
			//printf("temp2:%lld\n", temp2);
			if(count < 10){
				printf("   %d. ", count);
			}else{
				printf("  %d. ", count);
			}
			if(temp1 >= 10000000){
				printf("%lld kuti ", temp1/10000000);
				temp1 = temp1%10000000;
			}
			if(temp1 >= 100000){
				printf("%lld lakh ", temp1/100000);
				temp1 = temp1%100000;
			}
		
			if(temp1 >= 1000){
				printf("%lld hajar ", temp1/1000);
				temp1 = temp1%1000;
			}
		
			if(temp1 >= 100){
				printf("%lld shata ", temp1/100);
				temp1 = temp1%100;
			}
			if(temp1 !=0){
				printf("%lld kuti", temp1);
			}else{
				printf("kuti");
			}
			
			if(temp2 != 0){
				printf(" ");
				if( (temp2 >= 10000000)&& (temp2 != 0) ){
					printf("%lld kuti ", temp2/10000000);
					temp2 = temp2%10000000;
				}
				if( (temp2 >= 100000)&& (temp2 != 0) ){
					printf("%lld lakh ", temp2/100000);
					temp2 = temp2%100000;
				}
		
				if( (temp2 >= 1000)&& (temp2 != 0) ){
					printf("%lld hajar ", temp2/1000);
					temp2 = temp2%1000;
				}
		
				if( (temp2 >= 100)&& (temp2 != 0) ){
					printf("%lld shata ", temp2/100);
					temp2 = temp2%100;
				}
				if(temp2 !=0 ){
					printf("%lld\n", temp2);
				}else{
					printf("\n");
				} 
			}else{
				printf("\n");
			}
		}else{
			if(count < 10){
				printf("   %d. ", count);
			}else{
				printf("  %d. ", count);
			}
			if(data == 0){
				flag = 1;
			}
			if(data >= 10000000){
				printf("%lld kuti ", data/10000000);
				data = data%10000000;
			}
			if(data >= 100000){
				printf("%lld lakh ", data/100000);
				data = data%100000;
			}
		
			if(data >= 1000){
				printf("%lld hajar ", data/1000);
				data = data%1000;
			}
		
			if(data >= 100){
				printf("%lld shata ", data/100);
				data = data%100;
			}
			if(flag == 1){
				printf("%lld", data);
				flag = 0;
			}
			if(data != 0){
				printf("%lld\n", data);	
			}else{
				printf("\n");	
			}
		}
		count ++;
	}
	return 0;
}
