#include <stdio.h>
#include <string.h>

int main(){
	char str[1001];
	memset(str,'\0',sizeof(str));

	scanf("%s",str);
	
	if(str[0]>=97 && str[0]<=122){
		str[0]-=32;
	}
	
	printf("%s",str);
	
	return 0;
}
