#include<stdio.h>
main(){
	int i,j,k,n,flag,cases;
	char ln;
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		scanf("%c%c%c%c%d",&ln,&ln,&ln,&ln,&n);
		long long int num[n*n],num2[n*n];
		for(j=0,k=n*n-1;j<n*n;j++,k--){
			scanf("%lld",&num[j]);
			num2[k]=num[j];
		}
		flag=0;
		for(j=0;j<n*n;j++){
			if(num[j]!=num2[j] || num[j]<0){
				printf("Test #%d: Non-symmetric.\n",i);
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("Test #%d: Symmetric.\n",i);
		}
	}
	return 0;
}
