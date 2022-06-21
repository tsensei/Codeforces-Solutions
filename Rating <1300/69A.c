#include <stdio.h>

int main(){
    int n,a,b,c,ca,cb,cc;
    n=a=b=c=ca=cb=cc=0;
    
    scanf("%d",&n);
    
    while(n){
        scanf("%d %d %d",&a,&b,&c);
        ca += a;
        cb += b;
        cc += c;
        n--;
    }
    
    if(ca==0 && cb==0 && cc==0){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
    
}
