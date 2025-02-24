#include <stdio.h>
#include <stdlib.h>
void maximum(int T[],int n){
    int biggest=0;
    int indice;
    int *addr;
    for (int i=0; i < n; i++)
    {
        if(T[i]<T[i+1]){
            biggest=T[i+1];
            indice=i+1;
            addr=&T[i+1];
        }
    }
    printf("biggest value:%d\n",biggest);
    printf("address of the value:%p\n",addr);
    printf("T[%d]\n",indice);
}
int main(){
    int n=6;
    int T[]={1,2,23,15,9,4};
    maximum(T,n);
    printf("%p",&T[2]);
}