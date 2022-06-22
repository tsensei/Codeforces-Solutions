#include<stdio.h>

int main(){
	int n=0,m=0,i=0,j=0,count=0;
	
	scanf("%d %d",&n,&m);
	
	for(i=n+1;i<=53;i++){
		count=0;
		for(j=2;j<i;j++){
			if((i%j)==0){
				count++;
				break;
			}
		}
		
		if(count==0){
			break;
		}
	}
	
	if(m==i){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
	
}
