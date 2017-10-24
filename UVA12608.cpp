#include<stdio.h>
int main(){
    int i,ans,car,cases,weigh,points,dis[1005],trash[1005];
    scanf("%d",&cases);
    while(cases--){
        scanf("%d%d",&weigh,&points);
        for(i=0;i<points;i++){
            scanf("%d%d",&dis[i],&trash[i]);
        }
        for(i=0,car=0,ans=0;trash[points-1]!=0;){
        	if(trash[i]<=weigh-car){
        		car+=trash[i];
        		trash[i]=0;
        		i++;
        	}
        	else{
        		ans+=dis[i]*2;
        		car=0;
        	}
        	if(car==weigh && trash[points-1]!=0){
        		car=0;
        		ans+=dis[i-1]*2;
        	}
        }
        printf("%d\n",ans+dis[i-1]*2);
    }
    return 0;
}
