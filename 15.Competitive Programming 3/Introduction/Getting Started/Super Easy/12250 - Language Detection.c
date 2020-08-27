#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char e[]="HELLO";
    char s[]="HOLA";
    char g[]="HALLO";
    char f[]="BONJOUR";
    char i[]="CIAO";
    char r[]="ZDRAVSTVUJTE";
    int n=0,res;
    while(1){
        scanf("%s",a);
        n++;
        if(a[0]=='#'){
            break;
        }
        res = strcmp(a,e);
        if(res==0){
            printf("Case %d: ENGLISH\n",n);
            continue;
        }
        res = strcmp(a,s);
        if(res==0){
            printf("Case %d: SPANISH\n",n);
            continue;
        }
        res = strcmp(a,g);
        if(res==0){
            printf("Case %d: GERMAN\n",n);
            continue;
        }
        res = strcmp(a,f);
        if(res==0){
            printf("Case %d: FRENCH\n",n);
            continue;
        }
        res = strcmp(a,i);
        if(res==0){
            printf("Case %d: ITALIAN\n",n);
            continue;
        }
        res = strcmp(a,r);
        if(res==0){
            printf("Case %d: RUSSIAN\n",n);
            continue;
        }
        printf("Case %d: UNKNOWN\n",n);
    }
    return 0;
}
