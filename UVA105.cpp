#include<stdio.h>
int line[10001];
main(){
	int i,left,high,right,end=0,temp;
	while(scanf("%d%d%d",&left,&high,&right)>0){
		for(;left<right;left++){
			if(line[left]<high){
				line[left]=high;
			}
		}
		if(right>end){
			end=right;
		}
	}
	for(i=0,temp=0;i<end;i++){
		if(temp==line[i]){
			continue;
		}
		temp=line[i];
		printf("%d %d ",i,line[i]);
	}
	printf("%d %d\n",i,line[i]);
	return 0;
}
