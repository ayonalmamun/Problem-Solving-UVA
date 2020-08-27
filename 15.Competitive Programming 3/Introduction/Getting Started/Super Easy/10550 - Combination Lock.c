#include<stdio.h>
int main(){
    int n,p1,p2,p3,sum;
    while(scanf("%d %d %d %d",&n,&p1,&p2,&p3)==4){
        sum=0;
        if(n==0 && p1==0 && p2==0 && p3==0){
            break;
        }
        if(n-p1>0){
            sum=sum+(n-p1)*9;
        }
        else{
            sum=sum+(n-p1+40)*9;
        }
        if(p2-p1>0){
            sum=sum+(p2-p1)*9;
        }
        else{
            sum=sum+(p2-p1+40)*9;
        }
        if(p2-p3>0){
            sum=sum+(p2-p3)*9;
        }
        else{
            sum=sum+(p2-p3+40)*9;
        }
        sum=720+360+sum;
        printf("%d\n",sum);
    }
    return 0;
}

