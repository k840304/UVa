#include<stdio.h>
main(){
	int i,dig,ans,sum,max;
	char n[1000];
	while(scanf("%s",n)>0){
		sum=0;
		ans=-1;
		max=-1;
		for(i=0;n[i]!='\0';i++){
			if(n[i]>='0'&&n[i]<='9'){
				dig=n[i]-'0';
			}
			else if(n[i]>='A'&&n[i]<='Z'){
				dig=n[i]-'A'+10;
			}
			else if(n[i]>='a'&&n[i]<='z'){
				dig=n[i]-'a'+36;
			}
			else{
				dig=0;
			}
			if(dig>max){
				max=dig;
			}
			sum+=dig;
		}
		if(!max){
			max=1;
		}
		for(i=max;i<62;i++){
			if(!(sum%i)){
				ans=i+1;
				break;
			}
		}
		if(!(ans==-1)){
			printf("%d\n",ans);
		}
		else{
			printf("such number is impossible!\n");
		}
	}
	return 0;
}
