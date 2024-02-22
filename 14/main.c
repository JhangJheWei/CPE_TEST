#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int piece_numbers=0;
	int N,i = 0;
	double p, q;
    double a, r;
    scanf("%d", &piece_numbers);
	
	while(piece_numbers){
		scanf("%d %lf %d", &N, &p, &i);
        if(p == 0){
            printf("0.0000\n");
        }
        else{
            printf("%.4lf\n", ((pow((1 - p), i - 1) * p) * (1 - pow((pow((1 - p), N)), 100000)) / (1 - (pow((1 - p), N)))));
        }
		piece_numbers--;
	}
	return 0;
}
