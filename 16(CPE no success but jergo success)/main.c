#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char datas[1001] = {0};
	int i,j,k,temp1,temp2,flag,count=0;//32~126
	
	while(gets(datas)){
		char result_1[97] = {0};
		int result_2[97] = {0};
		k=0;
		for(i=0;i<strlen(datas);i++){
			temp1 = datas[i];
			count = 0;
			flag = 0;
			temp2 = 0;
			for(j=32;j<127;j++){
				if(temp1 == j){
					count++;
				}
			}
			for(j=0;j<96;j++){
				temp2 = result_1[j];
				if(temp1 == temp2){
					result_2[j] = result_2[j]+count;
					flag = 1;
				}
			}
			if(flag == 0){
				result_1[k] = datas[i];
				result_2[k] = count;
				k++;
			}
		}
		for(i=0;i<strlen(result_1);i++){
			char temp3;
			int temp4,temp5 = 0;
			for(j=i;j<strlen(result_1);j++){
				if(result_2[j] < result_2[i]){
					temp1 = result_2[i];
					result_2[i] = result_2[j];
					result_2[j] = temp1;
					/*----------------*/
					temp3 = result_1[i];
					result_1[i] = result_1[j];
					result_1[j] = temp3;
				}
			}
			for(j=i;j<strlen(result_1);j++){
				if(result_2[j] == result_2[i]){
					temp4 = result_1[i];
					temp5 = result_1[j];
					if(temp4 < temp5){
						temp1 = result_2[i];
						result_2[i] = result_2[j];
						result_2[j] = temp1;
						/*----------------*/
						temp3 = result_1[i];
						result_1[i] = result_1[j];
						result_1[j] = temp3;
					}
				}
			}
		}
		temp2 = 0;
		for(i=0;i<strlen(result_1);i++){
			temp2 = result_1[i];
			printf("%d %d\n", temp2, result_2[i]);
		}
		printf("\n");
	}
	return 0;
}
