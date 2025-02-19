#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    // printf("a=%d,b=%d\n",*a,*b);
    // *a=(*a)^(*b);
    // printf("a=%d,b=%d\n",*a,*b);
    // *b=(*a)^(*b);
    // printf("a=%d,b=%d\n",*a,*b);
    // *a=(*a)^(*b);
    // printf("a=%d,b=%d\n",*a,*b);

}
int main(){
    int a=12;
    int b=5;
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&a);
    printf("a=%d,b=%d",a,b);
    return 0;
}