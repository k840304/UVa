#include<stdio.h>
#include<stdlib.h>
int prime[1000001];
main(){
	int i,j,num,num2,num3;
	prime[1]=prime[0]=1;
	for(i=2;i<=1000000;i++){
        if(prime[i]==0){
            for(j=i+i;j<=1000000;j+=i){
                prime[j]=1;
       		}
    	}
	}
	while(scanf("%d",&num)>0){
		if(prime[num]==1){
			printf("%d is not prime.\n",num);
		}
		else{
			num3=0;
			num2=num;
			while(num2){
				num3*=10;
				num3+=num2%10;
				num2/=10;
			}
			if(prime[num3]==0 && num != num3){
				printf("%d is emirp.\n",num);
			}
			else{
				printf("%d is prime.\n",num);
			}
		}
	}
	return 0;
}
