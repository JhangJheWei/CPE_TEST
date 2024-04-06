#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*判斷是否為質數*/
int isprime(int n){
    int k = 0;
    for(k=2;k<n;k++){
    	if(n%k==0){
    		break;
    	}
    }
    return k==n;
}
/****************/

int main(int argc, char *argv[]) {
	int n,n1,n2 = 0;
	char test[1000000];
    
    while(scanf("%s", &test) != EOF){
    	n = atoi(test);
    	if(isprime(n)){
    		n1 = n;
    		/*數值反轉*/
    		n2 = 0;
    		while(n1){
    			n2 = n2*10+n1%10;
    			n1/=10;
    		}
    		/**********/
    		if(n2!=n && isprime(n2)){
    			printf("%d is emirp.\n", n);
    		}else{
    			printf("%d is prime.\n", n);
    		}
    	}else{
    		printf("%d is not prime.\n", n);
    	}
    }
	return 0;
}
