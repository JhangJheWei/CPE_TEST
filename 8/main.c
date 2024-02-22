#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_data_1;
	int input_data_2 = 0;
	int pieces_number = 0;
	int b1=0;
	int b2 = 0;
	int hex[16] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};

	scanf("%d", &pieces_number);
	while(pieces_number--){
		b1 = 0;
		b2 = 0;
		scanf("%d", &input_data_1);
		input_data_2 = input_data_1;
		while(input_data_1>0){
			b1 = b1 + (input_data_1%2);
			input_data_1 = input_data_1/2;
		}
		while(input_data_2>0){
			b2 = b2 + hex[input_data_2%10];
			input_data_2 = input_data_2/10;
		}
		printf("%d %d\n", b1, b2);
	}
	return 0;
}
