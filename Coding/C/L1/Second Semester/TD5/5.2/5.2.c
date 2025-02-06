#include <stdio.h> 
int main () { 
    int x=1,y=2; 
    int *a=&x,*b=&y,*c=a; 
    printf("*a = %d , *b = %d , *c = % d \n",*a,*b,*c); 
    a=b; 
    printf("*a = %d , *b = %d , *c = % d \n",*a,*b,*c); 
    *a=3; 
    printf("*a = %d , *b = %d , *c = % d \n",*a,*b,*c); 
    *c=4; 
    printf ("x = %d , y = % d \n",x,y); 
    *b=*c ; 
    if(b==c) *a=5; 
    else *a=6; 
    printf("*a = % d \n",*a);
}