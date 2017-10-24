#include<stdio.h>
#include<string.h>
void output(long long int num,long long int flag){
	if(num==0){
		flag=1;
	}
	if(num>=10000000){
		printf(" %lld kuti",num/10000000);
		num%=10000000;
	}
	if(num>=100000){
		printf(" %lld lakh",num/100000);
		num%=100000;
	}
	if(num>=1000){
		printf(" %lld hajar",num/1000);
		num%=1000;
	}
	if(num>=100){
		printf(" %lld shata",num/100);
		num%=100;
	}
	if(flag==1 && num!=0){
		printf(" %lld",num);
	}
	else if(flag==0 && num==0){
		printf(" kuti");
	}
}
main(){
	int i=1;
	long long int num,num2,flag;
	while(scanf("%lld",&num)>0){
		if(num==0){
			printf("%4d.",i);
			printf(" 0\n");
			i++;
			continue;
		}
		num2=num%1000000000;
		num/=10000000;
		printf("%4d.",i);
		flag=0;
		output(num,flag);
		flag=1;
		output(num2,flag);
		printf("\n");
		i++;
	}
	return 0;
}

