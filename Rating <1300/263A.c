#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,input,move=0;
    
    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            scanf("%d",&input);
            if(input==1){
                move=abs(i-3)+abs(j-3);
                break;
            }
        }
        
    }
    printf("%d",move);
    return 0;
}
