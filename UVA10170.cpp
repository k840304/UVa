#include<stdio.h>
main(){
	long long int num,day;
	while(scanf("%lld%lld",&num,&day)>0){
		while(day>0){
			day-=num;
			num++;
		}
		printf("%lld\n",num-1);
	}
	return 0;
}
