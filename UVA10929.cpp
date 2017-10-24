#include<stdio.h>
main(){
	int ans,i;
	char num[1001];
	while(scanf("%s",num) && !(num[0]=='0' && num[1]=='\0')){
		ans=0;
		for(i=0;num[i]!='\0';i++){
			if(i%2){
				ans+=num[i]-'0';
			}
			else{
				ans-=num[i]-'0';
			}
		}
		if((ans%11)==0){
			printf("%s is a multiple of 11.\n",num);
		}
		else{
			printf("%s is not a multiple of 11.\n",num);
		}
	}
	return 0;
}
