#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,i,j,k,p,f = 0;
	//m&n是指區域的大小
	//i,j,k,p代表要處理的位子
	//d是輸入的地雷圖;c是鄰近的地雷計數 
	char d[102][102],c[102][102];
	while(scanf("%d%d", &m, &n) != EOF){
		scanf("\n");
		//0,0為輸入結束 
		if(m==0 && n==0){
			exit(0);
		}
		//先將地雷計數c全部清除為0 
		memset(c,0,sizeof(c));
		//以字串方式輸入m列的地雷圖 
		for(i=1;i<=m;i++){
			gets(&d[i][1]);//每一列的字串由註標1開始，用d[i][1](讀取每一行的輸入資料) 
		}
		//以每個地雷為中心，來計算周圍的地雷計數c 
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				if(d[i][j]=='*'){
					//以每個地雷d[i][j]為中心，將周圍上下左右9個計數都各增加1 
					for(k=i-1;k<=i+1;k++){
						for(p=j-1;p<=j+1;p++){
							c[k][p]++;
						}	
					}
				}	
			}	
		}
		//測資編號加1 
		f++;
		
		//除了第1組測資，其他測資都要換行 
		if(f>1){
			printf("\n");
		}
		//輸出測資編號 
		printf("Field #%d:\n",f);
		//輸出地雷計數 
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				if(d[i][j]=='*'){
					printf("*");//如果是地雷印 
				}else{
					printf("%d", c[i][j]);//否則印周圍地雷計數 
				}	
			}
			printf("\n");	
		}
	}
	return 0;
}
