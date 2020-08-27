#include<stdio.h>
int main(){
    int a,b,c,a1,b1,c1;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        if(a==0 && b==0 & c==0){
            break;
        }
        a1=a*a;
        b1=b*b;
        c1=c*c;
        if(a1+b1==c1 || a1+c1==b1 || b1+c1==a1){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}
