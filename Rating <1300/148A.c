#include <stdio.h>
#include <string.h>

int main(){
	int cond[4],d=0,count=0,target=0,i,j;
	
	scanf("%d %d %d %d %d",&cond[0],&cond[1],&cond[2],&cond[3],&d);
	
	int state[d+1];
	
	memset(state,0,sizeof(state));
	
	for(i=0;i<4;i++){
		target=cond[i];
		
		for(j=target;j<=d;j+=target){
			state[j]=1;
		}
	}
	
	for(i=1;i<=d;i++){
		if(state[i]==1){
			count++;
		}
	}
	
	printf("%d",count);
	
	return 0;
}
