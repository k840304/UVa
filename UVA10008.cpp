#include<stdio.h>
#include<string.h>
main(){
	int i,j,line,total,ans[26]={0};
	char ln,str[1000];
	while(scanf("%d%c",&line,&ln)>0){
		total=0;
		for(i=1;i<=line;i++){
			gets(str);
			for(j=0;j<strlen(str);j++){
				if(str[j]>='a'&&str[j]<='z'){
					ans[str[j]-'a']++;
					total++;
				}
				else if(str[j]>='A'&&str[j]<='Z'){
					ans[str[j]-'A']++;
					total++;
				}
			}
		}
		for(i=total;i>0;i--){
			for(j=0;j<26;j++){
				if(i==ans[j]){
					printf("%c %d\n",j+'A',ans[j]);
				}
			}
		}
	}
	return 0;
}
