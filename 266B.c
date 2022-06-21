#include <stdio.h>

int main(){
	char arr[51];
	int n=0,t=0,i=0,j=0;
	
	scanf("%d %d",&n,&t);
	
	scanf("%s",arr);
	
	for(i=0;i<t;i++){
		for(j=0;j<n;j++){
			if(arr[j]=='B'&& arr[j+1]=='G'){
				arr[j]='G';
				arr[j+1]='B';
				j++;
			}
		}
	}
	
	printf("%s",arr);
	return 0;
}
