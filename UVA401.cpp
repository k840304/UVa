#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,flag,flag2;
	char str[21],mirror[42]={'A','A','E','3','H','H','I','I','J','L','L','J','M','M','O','O','S','2','T','T','U','U','V','V','W','W','X','X','Y','Y','Z','5','1','1','2','S','3','E','5','Z','8','8'};
	while(gets(str)>0){
		flag=0;
		flag2=0;
		for(i=0,j=strlen(str)-1;i<=j;i++,j--){
			if(str[i]==str[j]){
				flag=0;
			}
			else{
				flag=1;
				break;
			}
		}
		if(flag==0){
			for(i=0;i<=strlen(str)-1;i++){
				for(j=0;j<42;j+=2){
					if(str[i]==mirror[j]){
						if(mirror[j]==mirror[j+1]){
							flag2=0;
							break;
						}
						else{
							flag2=1;
							break;
						}
					}
				}
				if(flag2==1){
					break;
				}
				else if(j==42 && str[i]!=mirror[j]){
					flag2=1;
					break;
				}
			}
		} 
		else if(flag==1){
			for(i=0,j=strlen(str)-1;i<=j;i++,j--){
				if(str[i]!=str[j]){
					for(k=0;k<42;k+=2){
						if(str[i]==mirror[k]){
							if(mirror[k+1]==str[j]){
								flag2=0;
								break;
							}
							else{
								flag2=1;
								break;
							}
						}
					}
				}
				if(flag2==1){
					break;
				}
			}
		}
		if(flag==0 && flag2==0){
			printf("%s -- is a mirrored palindrome.\n\n",str);
		}
		else if(flag==0 && flag2==1){
			printf("%s -- is a regular palindrome.\n\n",str);
		}
		else if(flag==1 && flag2==0){
			printf("%s -- is a mirrored string.\n\n",str);
		}
		else if(flag==1 && flag2==1){
			printf("%s -- is not a palindrome.\n\n",str);
		}
	}	
	return 0;
}
