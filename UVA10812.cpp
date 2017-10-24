#include<stdio.h>
main(){
	int a,b,i,sum,dif,cases;
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		scanf("%d%d",&sum,&dif);
		a=(sum+dif)/2;
		b=sum-a;
		if((sum+dif)%2||a<0||b<0){
			printf("impossible\n");
		}
		else{
			if(a>b){
				printf("%d %d\n",a,b);
			}
			else{
				printf("%d %d\n",b,a);
			}
		}
	}
	return 0;
}
