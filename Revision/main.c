#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n_of_num(int n){
    int c = 0;
    while (n > 0) {
        n = n / 10;  // Divide by 10 to remove the last digit
        c++;  // Increment digit count
    }
    return c;
}
int somme_coupe(int n,int k){
    int u,v,d=pow(10,k);
    v=n%d;
    u=n/d;
    if(v==0) return 0;
    return u+v;
}
int is_kaprekar(int n){
    n=n*n;
    if(somme_coupe(n,n_of_num(n/2))==n) return 1;
    else return 0;
}
int main(){
    int n,s,a;
    n=(s+1)+ ++a;
    printf("give me a number:");
    scanf("%d",&n);
    if(is_kaprekar(n)==1) printf("the number is a kaprekar");
    else printf("the number is not a kaprekar");
    return 0;
}