#include<stdio.h>
main(){
	long long int a,b,i,j,ans[1000],flag;
	while(scanf("%lld %lld",&a,&b)>0){
		if(a==0 || b==0 || b==1 || b>a){
			printf("Boring!\n");
			continue;
		}
		for(i=0,flag=0;a!=1;i++,a/=b){
			ans[i]=a;
			if(a%b){
				printf("Boring!\n");
				flag=1;
				break;
			}
		}
		if(flag==0){
			for(j=0;j<i;j++){
				printf("%lld ",ans[j]);
			}
			printf("1\n");
		}
	}
	return 0;
}

