#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
	char data[32];
	int i,j,n,number = 0;
	int array[200000] = {0};
	int array_1[10000] = {0};
	int temp1,temp2,temp3=0;
	int count = 0;
	
	while(scanf("%d", &number) != EOF){
		for(i=0;i<(number*2);i++){
			scanf("%s", data);
			for(j=0,n=0;data[j]!='\0';j++){
				//array[i] = array[i] + (pow(2, n)*atoi(data[j]));
				n=n*2+(data[j]-'0');
				//printf("data[j]-'0':%d\n", data[j]-'0');
				//printf("n:%d\n", n);
			}
			array[i] = n;
		}
		for(i=0;i<(number*2);i+=2){
			temp1=temp2=temp3=0;
			temp1 = array[i];
			temp2 = array[i+1];
			while(temp2>0){
				temp3=temp1%temp2;
				temp1=temp2;
				temp2=temp3;
			}
			array_1[count] = temp1;
			//printf("count:%d\n", count);
			count++;
		}
		/*for(i=0;i<count;i++){
			if(array_1[i] !=0 ){
				printf("%d\n", array_1[i]);
			}
		}*/
		count = 1;
		for(i=0;i<count;i++){
			if(array_1[i] != 0){
				if(array_1[i]>1){
					printf("Pair #%d: All you need is love!\n", count);
				}else{
					printf("Pair #%d: Love is not all you need!\n", count);
				}
				count++;
			}
		}
		count = 0;
		/*for(i=0;i<(number*2);i++){
			printf("%d\n", array[i]);
		}*/
	}
	return 0;
}
