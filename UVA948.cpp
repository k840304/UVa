#include<stdio.h>
void FIB(int fib[]){
	int a=0,b=1,c,i;
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<41;i++){
		c=a+b;
		fib[i]=c;
		a=b;
		b=c;
	}
}
void Ans(int fib[],char ans[],int n){
	int i,j,flag;
	for(i=40,j=0,flag=0;i>0;i--){
		if(n>=fib[i]){
			n-=fib[i];
			ans[j]='1';
			j++;
			flag=1;
		}
		else if(flag==1){
			ans[j]='0';
			j++;
		}
	}
	ans[--j]='\0';
}
main(){
	int i,n,cases,fib[41];
	char ans[41];
	FIB(fib);
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		scanf("%d",&n);
		Ans(fib,ans,n);
		printf("%d = %s (fib)\n",n,ans);
	}
}
