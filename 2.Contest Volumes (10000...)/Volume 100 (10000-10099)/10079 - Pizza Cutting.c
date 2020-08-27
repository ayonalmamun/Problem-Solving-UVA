#include<stdio.h>
int main(){
    long long int n;
    while(scanf("%lld",&n)){
        if(n<0){
            break;
        }
        n=(n*(n+1)/2)+1;
        printf("%lld\n",n);
    }
    return 0;
}
