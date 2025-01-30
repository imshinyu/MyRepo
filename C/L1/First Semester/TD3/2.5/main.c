#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n;
    printf("give me a number:");
    scanf("%d",&n);
    printf("Display (A):\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("Display (B):\n");
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}