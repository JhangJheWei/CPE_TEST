#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long people,end_day = 0;
	long long finally_people,days = 0;
	
	while(scanf("%lld %lld", &people, &end_day) != EOF){
		finally_people = 0;
		days = 0; 
		if((1<=people<=10000) && (1<=end_day<=1000000000000000)){
			/*while(end_day>people){
				end_day-=people;
				people++;
				finally_people = people;
			}
			printf("%lld\n", finally_people);*/
			for(end_day=end_day;end_day>0;people++){
				end_day-=people;
				finally_people = people;
				//printf("%d %d\n", people, days);
			}
			printf("%lld\n", finally_people);
			/*for(days=1;days<=end_day;people++){
				days+=people;
				//printf("%d %d\n", people, days);
			}
			finally_people = people;
			printf("%lld\n", finally_people);*/ 
		}
	}
	return 0;
}
