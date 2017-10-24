#include<stdio.h>
main(){
	int a,b,temp;
	while(scanf("%d%d",&a,&b)>0){
		if(b>a){
			temp=a;
			a=b;
			b=temp;
		}
		printf("%d\n",a-b);
	}
	return 0;
}
