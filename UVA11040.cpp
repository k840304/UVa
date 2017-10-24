#include<stdio.h>
int wall[10][10];
int main(){
	int i,j,k,cases;
	scanf("%d",&cases);
	while(cases--){
		for(i=1;i<=9;i+=2){
			for(j=1;j<=i;j+=2){
				scanf("%d",&wall[i][j]);
			}
		}
		for(i=9;i>=1;i-=2){
			for(j=i;j>=1;j-=2){
				wall[i][j-1]=(wall[i-2][j-2]-wall[i][j]-wall[i][j-2])>>1;
			}
		}
		for(i=9;i>=1;i-=2){
			for(j=i,k=i-1;k>0;j--,k--){
				wall[i-1][k]=wall[i][j]+wall[i][j-1];
			}
		}
		for(i=1;i<=9;i++){
			for(j=1;j<=i;j++){
				printf("%d",wall[i][j]);
				if(j!=i){
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
} 
