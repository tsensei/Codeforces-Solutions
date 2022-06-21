#include <stdio.h>

int main(){
	int x=0,a=0,b=0,c=0,d=0;
	
	scanf("%d",&x);
	
	do{
		x++;
		a=x%10;
		b=(x/10)%10;
		c=(x/100)%10;
		d=x/1000;
				
	}while(a==b || a==c || a==d || b==c || b==d || c==d);
	
	printf("%d",x);
	
	return 0;
}
