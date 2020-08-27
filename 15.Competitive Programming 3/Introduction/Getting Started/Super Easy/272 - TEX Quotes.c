#include<stdio.h>
int main(){
    char a;
    int i,c=0;
    while(scanf("%c",&a)!=EOF){
        if(a=='"'){
            if(c%2==0){
               printf("``");
               c++;
            }
            else{
                printf("''");
                c++;
            }
        }
        else{
            printf("%c",a);
        }
    }
    return 0;
}
