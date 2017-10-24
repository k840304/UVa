#include<stdio.h>
main(){
	int i,flag=0;
	char sen[1001];
	while(gets(sen)>0){
		for(i=0;sen[i]!='\0';i++){
			if(sen[i]=='"'&&flag==0){
				printf("``");
				flag=1;
			}
			else if(sen[i]=='"'&&flag==1){
				printf("''");
				flag=0;
			}
			else{
				printf("%c",sen[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
