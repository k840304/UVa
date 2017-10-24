#include<stdio.h>
main(){
	int ans,i,cases,day,month,date[13]={0,3,28,7,4,9,6,11,8,5,10,7,12};
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		scanf("%d%d",&month,&day);
		ans=(day-date[month])%7;
		if(ans%7<0){
			ans+=7;
		}
		switch(ans){
			case 0:
				printf("Monday\n");
				break;
			case 1:
				printf("Tuesday\n");
				break;
			case 2:
				printf("Wednesday\n");
				break;
			case 3:
				printf("Thursday\n");
				break;
			case 4:
				printf("Friday\n");
				break;
			case 5:
				printf("Saturday\n");
				break;
			case 6:
				printf("Sunday\n");
				break;
		}
	}
}
