#include<stdio.h>
main(){
	int a,b,i,j,ans,cases;
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		ans=0;
		scanf("%d%d",&a,&b);
		for(j=a;j<=b;j++){
			if(j%2){
				ans+=j;
			}
		}
		printf("Case %d: %d\n",i,ans);
	}
	return 0;
}
