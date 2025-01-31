#include <stdio.h>
void Premiere (int aval){
    int a;
    a = aval ;
    printf("valeur de a=%d et l'address de a=%p\n",a,&a);
    /* Afficher la valeur et l'adresse de a ici */
}
void Deuxieme (int bval)
{
    int b=bval;
    printf("valeur de b=%d et l'address de b=%p\n",b,&b);
    /* Afficher la valeur et l'adresse de b ici */
}
int main (){
    Premiere (3) ;
    Deuxieme (8) ;
    Deuxieme (17) ;
    return 0;
}