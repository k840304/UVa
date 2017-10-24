#include<stdio.h>
int degree(int sum){
	int ans=1,temp;
	while(sum>=10){
		ans++;
		temp=sum;
		sum=0;
		while(temp!=0){
			sum+=temp%10;
			temp/=10;	
		}
	}
	return ans;
}
main(){
	int i,sum;
	char num[1001];
	while(scanf("%s",num)&&!(num[0]=='0'&&num[1]=='\0')){\
		sum=0;
		for(i=0;num[i]!='\0';i++){
			sum+=num[i]-'0';
		}
		if(sum%9!=0){
			printf("%s is not a multiple of 9.\n",num);
		}
		else{
			printf("%s is a multiple of 9 and has 9-degree %d.\n",num,degree(sum));
		}
	}
	return 0;
}
