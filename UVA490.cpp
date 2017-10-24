#include<stdio.h>
#include<string.h>
main(){
	int i,j,m,n,maxlen=0;
	char str[100][101],str2[100][101];
	for(i=0;gets(str[i])>0 && gets(str2[i])>0;i++){
		if(strlen(str[i])>maxlen){
			maxlen=strlen(str[i]);
		}
		else if(strlen(str2[i])>maxlen){
			maxlen=strlen(str2[i]);
		}
	}
	for(n=0;n<maxlen;n++){
		for(m=i-1;m>=0;m--){
			if(str2[m][n]!='\0'){
				printf("%c",str2[m][n]);
			}
			else{
				printf(" ");
			}
			if(str[m][n]!='\0'){
				printf("%c",str[m][n]);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
