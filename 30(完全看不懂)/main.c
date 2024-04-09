#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a[500000];

int main(int argc, char *argv[]) {
	int i,n,x,y;
	
	while(scanf("%d", &x) != EOF){
		for(n=0;;n++){
			scanf("%d", &a[n]);
			if(getchar() == '\n'){
				break;
			}
		}
		y = a[0]*n;
		for(i=1;i<n;i++){
			y = y*x+a[i]*(n-i);
		}
		printf("%d\n", y);
	}
	/*long long x;
	while(scanf("%lld",&x)!=EOF){
		char c[1024]={0};
		long long a[1024]={0},ans=0;
		int n=0,i;
		char *p;
		gets(c);
		gets(c);
		p=strtok(c," ");
		while(p!=NULL){
			a[n]=atoi(p);
			n++;
			p=strtok(NULL," ");
		}
		for(i=n-2;i>=0;i--){
			ans=ans+a[n-2-i]*(i+1)*pow(x,i);
		}
		printf("%lld\n",ans);
	}*/
	/*
	#include <iostream>
using namespace std;
int main(){
	int x,y,a[1001];
	while(cin>>x){
		int n=0;
		while(x>0){
			cin>>a[n];
			if(getchar()=='\n')break;
			n++;
		}
		y=a[0]*n;
		for(int i=1;i<n;i++){
			y=y*x+a[i]*(n-i);
		}
		cout<<y<<endl;
	}
}
	*/
	return 0;
}
