#include <stdio.h>
#include <stdlib.h>
void display_arr(int T[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",T[i]);
    }
    printf("\n");
}
void enter_arr(int T[],int n){
    printf("enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
}
float avrg(int T[],int n){
    float result=0;
    for (int i = 0; i < n; i++)
    {
        result+=T[i];
    }
    result/=n;
    return result;
}
int main(){
    int n;
    printf("enter the size small or equal than 100:");
    scanf("%d",&n);
    while (n>100 || n<0)
    {
        if(n>100) printf("enter a number smaller than 100:");
        else{
            printf("please enter a positive number:");
        }
        scanf("%d",&n);
    }
    int T[n];
    enter_arr(T,n);
    display_arr(T,n);
    printf("average=%f",avrg(T,n));

}