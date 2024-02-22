#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int length(int data){
	int count = 0;
	for(;;){
		if(data == 1){
			count++;
			break;
		}else if((data%2) != 0){
			count++;
			data = data*3 + 1;
		}else{
			count++;
			data/=2;
		}
	}
	return count;
}

int main(int argc, char *argv[]) {
	int i,temp,number1,number2 = 0;
	while(scanf("%d %d", &number1, &number2) != EOF ){
		if(number2 > number1){
		for(i=number1;i<=number2;i++){
			if(i == number1){
				temp = length(i);
			}else{
				if(length(i) > temp){
					temp = length(i);
				}
			}
		}	
	}
	if(number2 < number1){
		for(i=number2;i<=number1;i++){
			if(i == number2){
				temp = length(i);
			}else{
				if(length(i) > temp){
					temp = length(i);
				}
			}
		}
	}
	if(number2 == number1){
		for(i=number2;i<=number1;i++){
			if(i == number2){
				temp = length(i);
			}else{
				if(length(i) > temp){
					temp = length(i);
				}
			}
		}
	}
	printf("%d %d %d\n" , number1, number2 , temp);
	}
	
	return 0;
}
