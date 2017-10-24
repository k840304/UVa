#include<stdio.h>
int GCD(int a,int b){
	int c;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
int gcd(int n){
	int i,j,ans=0;
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++)	{
  			ans+=GCD(i,j);
		}
	}
	return ans;
}
main(){
	int n;
	while(scanf("%d",&n) && n!=0){
		printf("%d\n",gcd(n));
	}
	return 0;
}
