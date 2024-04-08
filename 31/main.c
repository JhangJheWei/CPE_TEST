#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number,n,s,w,e,up,down,t = 0;
	char place[10];
	
	while(scanf("%d\n", &number) && number){
		up=1;
		n=2;
		w=3;
		e=4;
		s=5;
		down=6;
		while(number--){
			gets(place);
			if(strcmp(place, "north") == 0){
				t=up;
				up=s;
				s=down;
				down=n;
				n=t;
			}else if(strcmp(place, "south") == 0){
				t=up;
				up=n;
				n=down;
				down=s;
				s=t;
			}else if(strcmp(place, "east") == 0){
				t=up;
				up=w;
				w=down;
				down=e;
				e=t;
			}else if(strcmp(place, "west") == 0){
				t=up;
				up=e;
				e=down;
				down=w;
				w=t;
			}
		}
		printf("%d\n", up);
	}
	return 0;
}
