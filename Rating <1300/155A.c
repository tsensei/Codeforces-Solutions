#include<stdio.h>

int main(){
	int n=0,x=0,max=0,min=0,amazing=0;
	
	scanf("%d",&n);
	scanf("%d",&x);
	
	min=x;
	max=x;
	
	for(int i=1;i<n;i++){
		scanf("%d",&x);
		
		if(x<min){
			min=x;
			amazing++;
		}else if(x>max){
			max=x;
			amazing++;
		}
	}
	
	printf("%d",amazing);
	
	return 0;
}
