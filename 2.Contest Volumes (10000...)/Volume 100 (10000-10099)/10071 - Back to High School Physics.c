#include<stdio.h>
int main(){
    int v,t,r;
    while(scanf("%d %d",&v,&t)==2){
        if(v>=-100 && v<=100 && t>=0 && t<=200)
        {
            r=(v*t)*2;
            printf("%d\n",r);
        }
    }

    return 0;
}

