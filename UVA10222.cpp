#include<stdio.h>
main(){
	int i;
	char c,keyboard[48] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while((c=getchar())>0){
		if(c==' '||c=='\n'){
			putchar(c);
			continue;
		}
		for(i=0;c!=keyboard[i];i++);
		printf("%c",keyboard[i-2]);
	}
	return 0;
}
