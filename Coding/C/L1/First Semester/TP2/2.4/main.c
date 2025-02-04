#include <stdio.h>
#include <stdlib.h>

int main(){
    float unit,total,pVAT,VAT,notax;
    int n;
    printf("how many items you got:");
    scanf("%d",&n);
    printf("what is the price of one unit:");
    scanf("%f",&unit);
    notax=n*unit;
    VAT=notax*0.19;
    pVAT=notax+(19*notax)/100;
    printf("the price excluding tax:%f\n",notax);
    printf("VAT(19%%):%f\n",VAT);
    if(n>=1 && n<=5){
        total=pVAT;
        printf("total price:%f\n",total);
    } else if(n>=6 && n<=10){
        total=(5*notax)/100;
        printf("total price:%f\n",total);
    } else if(n>=11 && n<=30){
        total=(10*notax)/100;
        printf("total price:%f\n",total);
    } else if(n>=31 && n<=60){
        total=(15*notax)/100;
        printf("total price:%f\n",total);
    } else if(n>60){
        total=(20*notax)/100;
        printf("total price:%f\n",total);
    }
    return 0;
}