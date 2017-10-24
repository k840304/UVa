#include<stdio.h>
main(){
	int i,j,b,w,t,a,cases,matches;
	char str[20];
	scanf("%d",&cases);
	for(i=1;i<=cases;i++){
		b=0;
		w=0;
		t=0;
		a=0;
		scanf("%d",&matches);
		scanf("%s",str);
		for(j=0;j<matches;j++){
			switch(str[j]){
				case 'B':
					b++;
					break;
				case 'W':
					w++;
					break;
				case 'T':
					t++;
					break;
				case 'A':
					a++;
					break;
			}
		}
		if(a==matches){
			printf("Case %d: ABANDONED\n",i);
		}
		else if(b==matches-a){
			printf("Case %d: BANGLAWASH\n",i);
		}
		else if(w==matches-a){
			printf("Case %d: WHITEWASH\n",i);
		}			
		else if(b>w){
			printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
		}
		else if(w>b){
			printf("Case %d: WWW %d - %d\n",i,w,b);
		}
		else if(b==w){
			printf("Case %d: DRAW %d %d\n",i,b,t);
		}
	}
	return 0;
}
