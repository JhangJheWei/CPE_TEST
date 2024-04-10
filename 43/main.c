#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int data,sum = 0;
	
	while(scanf("%d", &data) != EOF){
		sum = 0;
		sum = data*3/2;
		printf("%d\n", sum);
		/*if(data%3 !=0 ){
			data = data + (data%3);
			sum = data;
			while(data > 1){
				sum = sum + (data / 3);
				data/=3;
			}
			printf("%d\n", sum);	
		}else{
			sum = data;
			while(data > 1){
				sum = sum + (data / 3);
				data/=3;
			}
			printf("%d\n", sum);
		}*/
	}
	return 0;
}
