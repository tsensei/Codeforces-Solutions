#include <stdio.h>
#include <string.h>

int main(){
	char arr[101];
	memset(arr,'\0',sizeof(arr));
	int upper=0,lower=0,i=0;

	scanf("%s", arr);

	for(i=0;arr[i]!='\0';i++){
		if(arr[i]>=65 && arr[i]<=92){
			upper++;
		}else{
			lower++;
		}
	}
	
	if(lower>upper || lower == upper){
		for(i=0;arr[i]!='\0';i++){
			if(arr[i]>=65 && arr[i]<=92){
				printf("%c",arr[i]+32);
			}else{
				printf("%c",arr[i]);
			}
		}
	}else{
		for(i=0;arr[i]!='\0';i++){
			if(arr[i]>=97 && arr[i]<=122){
				printf("%c",arr[i]-32);
			}else{
				printf("%c",arr[i]);
			}
		}
	}
	return 0;
	
}