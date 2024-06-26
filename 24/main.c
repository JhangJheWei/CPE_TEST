#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double distance,degree=0;
	char name[5] = {0};
	double ang,chord,arc = 0;
	
	while(scanf("%lf %lf %s", &distance, &degree, &name) != EOF){
		/*printf("distance:%d\n", distance);
		printf("degree:%d\n", degree);
		printf("name:%s\n", name);*/
		if(strcmp(name, "min") == 0){
			degree/=60.0;
		}
		/*if(name == "min"){
			degree/=60.0;
		}*/
		if(degree > 180.0){
			degree = 360.0-degree;
		}
		//將角度轉換成徑度量(弧度) 
		ang = degree*M_PI/180.0;
		//計算弦長 
		chord = 2.0*(distance+6440.0)*sin(ang/2.0);
		//計算弧長 
		arc = ang*(distance+6440.0);
		printf("%.6lf %.6lf\n", arc, chord);
	}
	return 0;
}
