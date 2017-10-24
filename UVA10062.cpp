#include<stdio.h>
main(){
	int flag=0;
	char str[1001];
	while(gets(str)>0){
		if(flag==1){
			printf("\n");
		}
		int i,word,max=1,min=1001,ascii[128]={0};
		for(i=0;str[i]!='\0';i++){
			word=str[i];
			ascii[word]++;
		}
		for(i=0;i<128;i++){
			if(ascii[i]>max){
				max=ascii[i];
			}
			if(ascii[i]<min && ascii[i]!=0){
				min=ascii[i];
			}
		}
		for(;min<=max;min++){
			for(i=127;i>=0;i--){
				if(ascii[i]==min){
					printf("%d %d\n",i,ascii[i]);
				}
			}		
		}
		flag=1;
	}
	return 0;
}
