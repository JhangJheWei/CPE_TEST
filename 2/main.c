#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int add_x,add_y,sub_x,sub_y = 0;
	char head;
	char cmd[101]= {};
	int i = 0;
	
	//scanf("%d %d", &X_axis, &Y_axis);//��JX�b�PY�b���ƭ�
	//scanf("%d %d %c", &x, &y, &head);//��J�ثe�����H�ª���V�M�y��
	//L�N��f�ɰw��90��
	//R�N���ɰw��90��
	//F�N��y�Ъ�X�MY�b�W�[�δ��1
	//N(�_��)E(�F��)W(���)S(�n��) 
	 
	while(scanf("%d %d %c", &x, &y, &head) != EOF){
		printf("%d %d %c\n", x, y, head);
		scanf("%s", &cmd);//��J�n�����H������V 
		
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
