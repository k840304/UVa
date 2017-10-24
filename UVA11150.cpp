#include<stdio.h>
main(){
	int n,emp,ans;
	while(scanf("%d",&n)>0){
		emp=1;
		ans=n;
		while((n+emp)>=3){
			ans+=(n+emp)/3;
			emp=(n+emp)/3+(n+emp)%3;
			n=0;
		}
		printf("%d\n",ans);
	}
	return 0;
}
