#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,i,j,k,p,f = 0;
	//m&n�O���ϰ쪺�j�p
	//i,j,k,p�N��n�B�z����l
	//d�O��J���a�p��;c�O�F�񪺦a�p�p�� 
	char d[102][102],c[102][102];
	while(scanf("%d%d", &m, &n) != EOF){
		scanf("\n");
		//0,0����J���� 
		if(m==0 && n==0){
			exit(0);
		}
		//���N�a�p�p��c�����M����0 
		memset(c,0,sizeof(c));
		//�H�r��覡��Jm�C���a�p�� 
		for(i=1;i<=m;i++){
			gets(&d[i][1]);//�C�@�C���r��ѵ���1�}�l�A��d[i][1](Ū���C�@�檺��J���) 
		}
		//�H�C�Ӧa�p�����ߡA�ӭp��P�򪺦a�p�p��c 
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				if(d[i][j]=='*'){
					//�H�C�Ӧa�pd[i][j]�����ߡA�N�P��W�U���k9�ӭp�Ƴ��U�W�[1 
					for(k=i-1;k<=i+1;k++){
						for(p=j-1;p<=j+1;p++){
							c[k][p]++;
						}	
					}
				}	
			}	
		}
		//����s���[1 
		f++;
		
		//���F��1�մ���A��L���곣�n���� 
		if(f>1){
			printf("\n");
		}
		//��X����s�� 
		printf("Field #%d:\n",f);
		//��X�a�p�p�� 
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				if(d[i][j]=='*'){
					printf("*");//�p�G�O�a�p�L 
				}else{
					printf("%d", c[i][j]);//�_�h�L�P��a�p�p�� 
				}	
			}
			printf("\n");	
		}
	}
	return 0;
}
