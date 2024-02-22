#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long data1,data2 = 0;
	int i=10;
	int count=0;
	int pre = 0;
	
	while(1){
		scanf("%lld %lld", &data1,&data2);
		count = 0;
		if( (data1 ==0) && (data2 ==0) ){
			break;
		}
		for(;;){
			if(( (data1%i) + (data2%i) + pre ) > 9 ){
				pre = 1;
				count++;
			}else{
				pre = 0;
			}
			if((data1 == 0) && (data2 == 0)){
				break;
			}
			data1/=i;
			data2/=i;
		}
		if(count == 0){
			printf("No carry operation.\n");
		}else if(count == 1){
			printf("%d carry operation.\n", count);
		}else{
			printf("%d carry operations.\n", count);
		}
	}
	
	return 0;
}
