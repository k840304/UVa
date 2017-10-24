#include <stdio.h>
main(){
   	long long int n,a,b,temp,cycle,max;
    while (scanf("%lld %lld",&a,&b)>0){
        printf("%lld %lld",a,b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for (max=0;a<=b;a++){
            n=a;
            cycle=1;
            while(n!=1){
                if(n%2){
                	n=3*n+1;
                }
                else{
                	n/=2;
				}
                cycle++;
            }
            if(cycle>max){
            	max=cycle;
            }
        }
        printf(" %lld\n",max);
    }
    return 0;
}

