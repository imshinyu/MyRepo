#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,d,r,gcd;
    printf("give me the numerator:");
    scanf("%d",&n);
    printf("give me the denominator:");
    scanf("%d",&d);
    while(d==0){
        printf("the denominator cannot be 0, try again:");
        scanf("%d",&d);
    }
    int original_n = n;
    int original_d = d;
    while(d!=0){
        r=n%d;
        n=d;
        d=r;
    }
    gcd=n;
    n=original_n/gcd;
    d=original_d/gcd;
    printf("\ninitial fraction is %d/%d",n,d);
    
    return 0;
}