#include<stdio.h>
int main(){
    long long int x,y,d;
    while(scanf("%lld %lld",&x,&y)!=EOF){
        if(x>y){
            d=x-y;
        }
        else{
            d=y-x;
        }
        printf("%lld\n",d);
    }
    return 0;
}
