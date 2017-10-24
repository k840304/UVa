#include<stdio.h>
main(){
	int i,j;
	char str[100001],str2[100001];
	while(scanf("%s%s",str,str2)>0){
		for(i=0,j=0;str2[i]!='\0'&&str[j]!='\0';i++){
			if(str2[i]==str[j]){
				j++;
			}
		}
		if(str[j]=='\0'){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
