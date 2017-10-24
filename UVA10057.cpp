#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int i,n,mid,same,temp;
	while(scanf("%d",&n)>0){
		int num[n];
		same=0;
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		sort(num,num+n);
		mid=(n+1)/2-1;
		temp=num[mid];
		if(n%2){
			for(i=0;i<n;i++){
				if(temp==num[i]){
					same++;
				}
			}
			printf("%d %d 1\n",num[mid],same);
		}
		else{
			for(;temp<=num[mid+1];temp++){
				for(i=0;i<n;i++){
					if(temp==num[i]){
						same++;
					}
				}
			}
			printf("%d %d %d\n",num[mid],same,num[mid+1]-num[mid]+1);
		}	
	}
	return 0;
}
