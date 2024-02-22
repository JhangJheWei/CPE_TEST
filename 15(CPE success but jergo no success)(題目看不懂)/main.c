#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int piece_numbers = 0;
	int datas[100001] = {0};
	int i,j,k,temp,mid1,mid2,count=0;
	
	while(scanf("%d", &piece_numbers) != EOF){
		for(i=0;i<piece_numbers;i++){
			scanf("%d", &datas[i]);
		}
		for(i=0;i<piece_numbers;i++){
			for(j=i;j<piece_numbers;j++){
				if(datas[j] < datas[i]){
					temp = datas[j];
					datas[j] = datas[i];
					datas[i] = temp;
				}
			}
		}
		temp = 0;
		if((piece_numbers%2) == 0){
			count = 0;
			mid1 = datas[(piece_numbers-1)/2];
			mid2 = datas[piece_numbers/2];
			for(j=mid1;j<=mid2;j++){
				temp = 0;
				for(i=0;i<piece_numbers;i++){
					if(abs(j-datas[i]) == 0){
						count++;
					}
					temp = temp + abs(j-datas[i]);
				}
			}
		}else{
			count = 0;
			mid1 = datas[piece_numbers/2];
			mid2 = 0;
			for(i=0;i<piece_numbers;i++){
				if(abs(mid1-datas[i]) == 0){
					count++;
				}
				temp = temp + abs(mid1-datas[i]);
			}
		}
		if((piece_numbers%2) == 0){
			printf("%d %d %d\n", mid1, count, (mid2-mid1+1));
		}else{
			printf("%d %d %d\n", mid1, count, 1);
		}
	}
	return 0;
}
