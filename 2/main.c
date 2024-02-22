#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int add_x,add_y,sub_x,sub_y = 0;
	char head;
	char cmd[101]= {};
	int i = 0;
	
	//scanf("%d %d", &X_axis, &Y_axis);//輸入X軸與Y軸的數值
	//scanf("%d %d %c", &x, &y, &head);//輸入目前機器人朝的方向和座標
	//L代表逆時針轉90度
	//R代表順時針轉90度
	//F代表座標的X和Y軸增加或減少1
	//N(北方)E(東方)W(西方)S(南方) 
	 
	while(scanf("%d %d %c", &x, &y, &head) != EOF){
		printf("%d %d %c\n", x, y, head);
		scanf("%s", &cmd);//輸入要機器人走的方向 
		
		for(i=0;i<sizeof(cmd)/sizeof(cmd[0]);i++){
			switch(cmd[i])
				printf("%c\n", cmd[i]);
			}
				case:'L'
					if(head == 'N'){
						head = W;
					}else if(head == 'E'){
						head = N;
					}else if(head == 'W'){
						head = S;
					}else if(head == 'S'){
						head = E;
					}
					break;
				case:'R'
					if(head == 'N'){
						head = E;
					}else if(head == 'E'){
						head = S;
					}else if(head == 'W'){
						head = N;
					}else if(head == 'S'){
						head = W;
					}
					break;
				case:'F'
					if(head == 'N'){
						head = E;
					}else if(head == 'E'){
						head = S;
					}else if(head == 'W'){
						head = N;
					}else if(head == 'S'){
						head = W;
					}
					break;
			}
		}
		
	}
	return 0;
}
