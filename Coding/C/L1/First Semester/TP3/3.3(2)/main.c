#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n,s=1,i=1,p;
    printf("give me a number that is even:");
    scanf("%d",&n);
    while(n%2!=0){
        printf("the number is odd! try again:");
        scanf("%d",&n);
    }
    for(i=0;s!=n && s<n;i++){
        s*=2;
    }
    p=pow(2,i);
    printf("the first power of 2 exceeding N is %d which is : %d",i,p);
}