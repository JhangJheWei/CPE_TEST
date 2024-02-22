#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int piece_numbers = 0;
	int people_numbers = 0;
	int numbers[500] = {0};
	int i,j,temp,middle=0;
	
	scanf("%d", &piece_numbers);
	while(piece_numbers){
		scanf("%d", &people_numbers);
		middle = 0;
		temp = 0;
		if(0<people_numbers<500){
			for(i=0;i<people_numbers;i++){
				scanf("%d", &numbers[i]);
			}
			for(i=0;i<people_numbers;i++){
				for(j=i;j<people_numbers;j++){
					if(numbers[j] < numbers[i]){
						temp = numbers[j];
						numbers[j] = numbers[i];
						numbers[i] = temp;
					}
				}
			}
			temp = 0;
			if((people_numbers % 2) == 0){
				middle = (numbers[(people_numbers/2)-1]+numbers[people_numbers/2])/2;
			}else{
				middle = numbers[(people_numbers/2)];
			}
			for(i=0;i<people_numbers;i++){
				temp = temp + abs(middle-numbers[i]);
			}
			printf("%d", temp);
		}
		piece_numbers--; 
		printf("\n");
	}
	return 0;
}
