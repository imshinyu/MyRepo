#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2,i=0;
    printf("enter a number between 1 and 100:");
    scanf("%d",&n1);
    printf("guess the number:");
    scanf("%d",&n2);
    for(i=0; n2>n1 || n2<n1;i++){
        while(n2<n1){
            printf("Too low ! Try again\n");
            printf("Enter your guess:");
            scanf("%d",&n2);
            i++;
        }
        while(n2>n1){
            printf("Too high ! Try again\n");
            printf("Enter your guess:");
            scanf("%d",&n2);
            i++;
        }
    }
    printf("Congratulations ! You ve guessed the number in %d attempts !",i);
    return 0;
}