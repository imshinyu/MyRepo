#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10,b=5;
    int *p;
    printf("&a is the address of a -> %d\n",&a);
    printf("&b is the address of b -> %d\n",&b);
    p=&a;
    printf("p stores the address of a -> %d\n",p);
    *p=a;
    printf("*p stores the value of a -> %d\n",*p);
    printf("&p is the address of p -> %d\n",&p);
    b=2*(*p);
    printf("b stores twice the value of *p -> %d\n",b);
    p=&b;
    printf("p now points to b -> %d\n",*p);
    *p=b;
    printf("*p stores the value of b -> %d\n",*p);
    return 0;
}
