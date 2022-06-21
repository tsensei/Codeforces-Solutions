#include <stdio.h>

int main(){
	unsigned long long int x;
	int count=0;
	
	scanf("%llu",&x);
	
	while(x){
		if(x%10 == 4 || x%10==7){
			count++;
		}		
		x/=10;				
	}
	
	if(count == 4 || count == 7){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
}
