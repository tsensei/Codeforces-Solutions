#include <stdio.h>
#include <string.h>
int main(){
	char arr[201];
	
	memset(arr,'\0',sizeof(arr));
	
	scanf("%s",arr);
	
	int i=0;
	
	for(i=0;arr[i]!='\0';i++){
		if(arr[i]=='.'){
			printf("0");
		}else if(arr[i]=='-'){
			if(arr[i+1]=='.'){
				printf("1");
			}else if(arr[i+1]=='-'){
				printf("2");
			}
			
			i++;
		}
	}
	
	return 0;
}
