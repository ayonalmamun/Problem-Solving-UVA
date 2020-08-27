#include<stdio.h>
int main(){
    int i,j,temp,k,x,c,m;
    while(scanf("%d %d",&i,&j)!=EOF){
        printf("%d %d ",i,j);
        m=0;
        if(i>j){
            temp=i;
            i=j;
            j=temp;
        }
        for(x=i;x<=j;x++){
            c=1;
            for(k=x;k!=1;k){
                if(k%2==0){
                    k=k/2;
                }
                else{
                    k=3*k+1;
                }
                c++;
            }
            if(c>m){
                m=c;
            }
        }
        printf("%d\n",m);
    }
    return 0;
}
