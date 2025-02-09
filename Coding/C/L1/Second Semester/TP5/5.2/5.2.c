#include<stdio.h>
int Toto(int *a , int * b ) {
(*a)++;
++(*b);
return *a+*b;
}
void Loulou (int *a , int *b , int *c) {
printf("Avant Toto : *a =%d , *b =%d , *c =%d \n",*a,*b,*c);
*c=Toto(a,b);
printf("Apres Toto : *a =%d , *b =%d , *c =%d \n",*a,*b,*c);
(*a)++;
++(*b);
}
void main(){
int a=3,b=4,c=4;
Loulou(&a,&b,&c);
printf("Apres Loulou ; a =%d , b =%d , c =%d \n",a,b,c); 
}