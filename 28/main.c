#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x1,y1,x2,y2,x3,y3,x4,y4,x,y = 0;
	
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) != EOF){
		x = x1 + x2 + x3 + x4;
		y = y1 + y2 + y3 + y4;
		if((x1==x3 && y1==y3) || (x1==x4)&&(y1==y4)){
			x = x-x1*3;
			y = y-y1*3;
		}else{
			x = x-x2*3;
			y = y-y2*3;
		}
		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}
