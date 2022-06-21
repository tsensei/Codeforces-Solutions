#include <stdio.h>
#include<string.h>
int main(){

	char arr[51];
	char target='X'; // Random
	memset(arr,'\0',sizeof(arr));
	
	int i=0,count=0,n=0;
	scanf("%d",&n);
	
	scanf("%s",arr);
	
	for(i=0;arr[i]!='\0';i++){
		if(arr[i]!=target){
			target=arr[i];
		}else{
			count++;
		}
	}
	
	printf("%d",count);
	
	return 0;
}
