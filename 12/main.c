#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int piece_numbers = 0;
	int days = 0;
	int files = 0;
	int file_number[100] = {0};
	int total_days[3651] = {0};
	int i,j,k,temp,count = 0;
	
	scanf("%d", &piece_numbers);
	while(piece_numbers){
		scanf("%d", &days);
		scanf("%d", &files);
		count=0;
		for(k=0;k<=3650;k++){
			total_days[k] = 0;
		}
		for(i=0;i<files;i++){
			scanf("%d", &file_number[i]);
			temp = file_number[i];
			for(j=1;(temp*j)<=days;j++){
				if((((temp*j)%7) != 0) && (((temp*j)%7) != 6)){
					if(total_days[temp*j] == 0){
						total_days[temp*j] = 1;
					}
				}
			}
		}
		for(i=0;i<=3650;i++){
			if(total_days[i] == 1){
				count++;
			}
		}
		printf("%d\n", count);
		piece_numbers--;
	}
	return 0;
}
