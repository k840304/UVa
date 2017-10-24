#include<stdio.h>
main(){
	int i,ans,cases,x,y,x2,y2;
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		ans=0;
		scanf("%d%d%d%d",&x,&y,&x2,&y2);
		ans=((x+y+1)+(x2+y2+1))*((x2+y2+1)-(x+y+1)+1)/2-x-y2-1;
		printf("Case %d: %d\n",i,ans);
	}
	return 0;
}
