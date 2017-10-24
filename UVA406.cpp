#include<stdio.h>
int prime[1001],ans[1001];
int main(){
	int c,i,j,range,n,m;
	for(i=2;i<1001;i++){
		if(prime[i]==0){
			for(j=i<<1;j<1001;j+=i){
				prime[j]=1;
			}
		}
	}
	while(scanf("%d%d",&n,&m)>0){
		for(i=1,j=0;i<=n;i++){
			if(prime[i]==0){
				ans[j]=i;
				j++;
			}
		}
		if(j%2){
			c=m*2-1;
		}
		else{
			c=m*2;
		}
		printf("%d %d:",n,m);
		if(c>j){
			range=j;
			i=0;
		}
		else{
			range=((j-c)/2)+c;
			i=(j-c)/2;
		}
		while(i<range){
			printf(" %d",ans[i++]);
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}
