#include<stdio.h>
main(){
	int i,j,row,col,checkx,checky,cases=1,num[102][102];
	while(scanf("%d%d",&row,&col)>0&&row!=0&&col!=0){
		if(cases!=1){
			printf("\n");
		}
		getchar();
		for(i=1;i<=row;i++){
			for(j=1;j<=col;j++){
				num[i][j]=getchar();
				if(num[i][j]=='.'){
					num[i][j]=0;
				}
			}
			getchar();
		}
		for(i=1;i<=row;i++){
			for(j=1;j<=col;j++) {
				if(num[i][j]=='*') {
					for(checkx=i-1;checkx<=i+1;checkx++){
						for(checky=j-1;checky<=j+1;checky++){
							if(num[checkx][checky]!='*'){
								num[checkx][checky]++;
							}
						}
					}
				}
			}
		}
		printf("Field #%d:\n",cases);
		for(i=1;i<=row;i++){
			for(j=1;j<=col;j++){
				if(num[i][j]>=0&&num[i][j]<=8){
					printf("%d",num[i][j]);
				}
				else{
					printf("%c",num[i][j]);
				}
			}
			printf("\n");
		}
		cases++;
	}
	return 0;
}
