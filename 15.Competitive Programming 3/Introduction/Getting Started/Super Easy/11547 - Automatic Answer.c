#include<stdio.h>
int main(){
    int a,b,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        a=a*567;
        a=a/9;
        a=a+7492;
        a=a*235;
        a=a/47;
        a=a-498;
        a=a/10;
        b=a%10;
        if(b<0){
            b=b*(-1);
        }
        printf("%d\n",b);

    }
    return 0;
}
