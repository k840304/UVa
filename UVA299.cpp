#include<stdio.h>
int ans(int train[],int n){
	int i,j,swap,count=0;
	for(i=n-1;i>=0;i--){
		for(j=i-1;j>=0;j--){
			if(train[i]<train[j]){
				swap=train[i];
				train[i]=train[j];
				train[j]=swap;
				count++;
			}
		}
	}
	return count;
}
main(){
	int i,j,n,cases;
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		scanf("%d",&n);
		int train[50];
		for(j=0;j<n;j++){
			scanf("%d",&train[j]);
		}
		printf("Optimal train swapping takes %d swaps.\n",ans(train,n));
	}
}
