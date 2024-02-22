#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int train_data[50] = {0};
	int pieces_count = 0;
	int train_total_number = 0;
	int i,j,k = 0;
	int data = 0;
	int count = 0;
	
	while(scanf("%d", &pieces_count) != EOF){
		for(k = 0;k < pieces_count; k++){
			train_total_number = 0;
			scanf("%d", &train_total_number);
			for(i = 0;i < train_total_number; i++){
				scanf("%d", &data);
				train_data[i] = data;
			}
			for(i = 0;i < train_total_number; i++){
				for(j = i;j < train_total_number; j++){
					if(train_data[i] > train_data[j]){
						count ++;
					}
				}
			}
			printf("Optimal train swapping takes %d swaps.\n", count);
			count = 0;
		}
	}
	return 0;
}
