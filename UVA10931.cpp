#include<stdio.h>
int mod(int num,char bin[]){
	int i,j,time=0;
	char bin2[40];
	for(i=0;num!=0;i++){
		time+=num%2;
		bin2[i]=num%2;
		num/=2;
	}
	for(j=0,i--;i>=0;i--,j++){
		bin[j]=bin2[i]+'0';
	}
	bin[j]='\0';
	return time;
}
main(){
	int num;
	char bin[40];
	while(scanf("%d",&num)&&num!=0){
		printf("The parity of %s is %d (mod 2).\n",bin,mod(num,bin));
	}
	return 0;
}