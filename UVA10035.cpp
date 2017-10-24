#include<stdio.h>
main(){
	int a,b,ans,carry;
	while(scanf("%d%d",&a,&b),a!=0||b!=0){
		ans=0,carry=0;
		while(a>0||b>0){
			if((a%10)+(b%10)+carry>=10){
				a/=10;
				b/=10;
				ans++;
				carry=1;
			}
			else{
				a/=10;
				b/=10;
				carry=0;
			}
		}
		if(ans==0){
			printf("No carry operation.\n");
		}
		else if(ans==1){
			printf("1 carry operation.\n");
		}
		else{
			printf("%d carry operations.\n",ans);
		}
	}
	return 0;
}
