#include<stdio.h>

int main(){
	int n=0,lo=0,lc=0,ro=0,rc=0,a,b,t=0;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		
		if(a==0){
			lc++;
		}else{
			lo++;
		}
		
		if(b==0){
			rc++;
		}else{
			ro++;
		}
	}
	
	if(lo>lc){
		t+=lc;
	}else{
		t+=lo;
	}
	
	if(ro>rc){
		t+=rc;
	}else{
		t+=ro;
	}
	
	printf("%d",t);
	
	return 0;
}
