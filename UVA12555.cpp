#include<stdio.h>
main(){
	int i,len,num,num2,cases;
	char skip,weigh[10];
	scanf("%d",&cases);
	getchar();
	for(i=1;i<=cases;i++){
		gets(weigh);
		len=sscanf(weigh,"%d%c%c%c%d",&num,&skip,&skip,&skip,&num2);
		if(len==4){
			printf("Case %d: %g\n",i,(float)num*0.5);			
		}
		else{
			printf("Case %d: %g\n",i,(float)num*0.5+(float)num2*0.05);
		}
	}
	return 0;
}
