#include<stdio.h>
main(){
	int n,value;
	char plate[9];
	scanf("%d",&n);
	while(n--){
		scanf("%s",plate);
		value=26*26*(plate[0]-'A')+26*(plate[1]-'A')+(plate[2]-'A')-1000*(plate[4]-'0')-100*(plate[5]-'0')-10*(plate[6]-'0')-(plate[7]-'0');
		if(value<0){
			value*=-1;
		}
		if(value<=100){
			printf("nice\n");
		}
		else{
			printf("not nice\n");
		}
	}
	return 0;
}

