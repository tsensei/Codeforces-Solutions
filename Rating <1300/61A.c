#include <stdio.h>
#include <string.h>

int main(){
	int i=0,x=0,y=0;
	
	char arr1[101],arr2[101];
	
	memset(arr1,'\0',sizeof(arr1));
	memset(arr2,'\0',sizeof(arr2));
	
	scanf("%s",arr1);
	scanf("%s",arr2);
	
	for(i=0;arr1[i]!='\0';i++){
		x=(arr1[i]==48)?0:1;
		y=(arr2[i]==48)?0:1;
		
		printf("%d", x^y);
	}
	
	return 0;
}
