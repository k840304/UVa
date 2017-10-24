#include<stdio.h>
#include<stdlib.h>
int sum(int n){
	int i,sum;
	if(n<10){
		return n;
	}
	while(n>=10){
		sum=0;
		for(;;){
			sum+=n%10;
			n/=10;
			if(n==0){
				break;
			}
		}
		n=sum;
	}
	return sum;
}
main(){
	int n;
	while(scanf("%d",&n) && n!=0){
		printf("%d\n",sum(n));
	}
	return 0;
}
