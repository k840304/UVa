#include<stdio.h>
void sort(int house[],int n){
	int i,j,swap;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(house[i]<house[j]){
				swap=house[i];
				house[i]=house[j];
				house[j]=swap;
			}
		}
	}
}
int ans(int house[],int mid,int n){
	int i,ans=0;
	for(i=0;i<mid;i++){
		ans+=house[mid]-house[i];
	}
	for(i=mid+1;i<n;i++){
		ans+=house[i]-house[mid];
	}
	return ans;
}
main(){
	int i,j,n,mid,cases,house[500];
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d",&house[j]);
		}
		sort(house,n);
		mid=(n-1)/2;
		printf("%d\n",ans(house,mid,n));
	}
	return 0;
}
