#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    int f=1;
    if(n==0) return 1;
    while(n>1){
        f*=n;
        n--;
    }
    return f;
}
int pascal(int n){

}
int main() {
    int n=5;
    printf("%d",fact(n));
    
}