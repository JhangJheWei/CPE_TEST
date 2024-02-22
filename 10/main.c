#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0;
	int pieces_number = 0;
	int data[3000] = {0};
	int check_number[3000] = {0};
	while(scanf("%d", &pieces_number) != EOF){
		for(i=0;i<=3000;i++){
			data[i] = 0;
			check_number[i] = 0;
		}
		for (i = 0; i < pieces_number; i++){
			scanf("%d", &data[i]);
		}
		for (i = 1; i < pieces_number; i++){
			check_number[abs(data[i-1]-data[i])] = 1;
		}
		for (i = 1; i < pieces_number; i++){
			if(check_number[i] == 0){
				break;
			}
		}
		if(i==pieces_number){
			printf("Jolly\n");
		}else{
			printf("Not jolly\n");
		}
	}
	return 0;
}
