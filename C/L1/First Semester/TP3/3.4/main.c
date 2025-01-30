#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int p=0;
    printf("x*y \t|");
    for(int i=0;i<=10;i++){
        printf("%d\t",i);
    }
    printf("\n");
    for(int i=0;i<=10;i++){
        printf("---------");
    }
    printf("\n");
    for(int i=0;i<=10;i++){
        printf("%d \t|",i);
        for(int j=0;j<=10;j++){
            p=i*j;
            printf("%d\t",p);
        }
        printf("\n");
    }
    return 0;
}