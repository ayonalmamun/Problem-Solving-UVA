#include<stdio.h>
int main(){
    int i,n;
    long long int a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        if(a>b){
            printf(">\n");
        }
        else if(a<b){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }
    return 0;
}
