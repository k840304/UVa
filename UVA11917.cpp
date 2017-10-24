#include<stdio.h>
#include<string.h>
main(){
	int i,j,cases,n,day,time[101];
	char sub[101][21],homework[21];
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%s %d",sub[j],&time[j]);
		}
		scanf("%d %s",&day,homework);
		for(j=0;j<n;j++){
			if(strcmp(homework,sub[j])==0){
				if(time[j]<=day){
					printf("Case %d: Yesss\n",i);
					break;
				}
				else if(time[j]<=day+5){
					printf("Case %d: Late\n",i);
					break;
				}
				else if(time[j]>day+5){
					printf("Case %d: Do your own homework!\n",i);
					break;
				}
			}
			else if(j==n-1){
				printf("Case %d: Do your own homework!\n",i);
			}
		}
	}
	return 0;
}

