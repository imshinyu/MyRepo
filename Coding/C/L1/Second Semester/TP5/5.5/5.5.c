#include <stdio.h>
#include <stdlib.h>

int swap(int *a,int *b){
    printf("%p,%p\n",a,b);
    if(a==b){
        printf("the address is the same\n");
        return -1;
    }
    else{
    *a=(*a)^(*b);
        *b=(*a)^(*b);
        *a=(*a)^(*b);
        return 0;
    }
}
int main(){
    int a=12;
    int b=5;
    printf("a=%d,b=%d\n",a,b);
    //swap(&a,&b);
    if(swap(&a,&b)==0) printf("a=%d,b=%d",a,b);
    return 0;
}