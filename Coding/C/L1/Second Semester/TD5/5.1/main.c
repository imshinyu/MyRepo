#include <stdio.h>
int main( void ){
    int n=4 , *ptr1 = &n;;
    double x = 6.38 , *ptr2 = &x;
    printf (" *********** Operateurs (&) vs. (*) ***********\n") ;
    printf ("\n ******* Les valeurs avec des variables :*****\n") ;
    printf ( " n = %d\n",n) ;
    printf ( " x = %lf\n",x) ;
    printf ("\n ***** Les adresses avec des variables :******\n") ;
    printf ( " Adresse de n = %p\n",&n) ;
    printf ( " Adresse de x = %p\n",&x) ;
    printf ("\n ****** Les adresses avec des pointeurs :******\n") ;
    printf ( " L'adresse de n = %p\n",ptr1) ;
    printf ( " L'adresse de x = %p\n",ptr2) ;
    printf ("\n ****** Les valeurs avec des pointeurs :******\n") ;
    printf ( " La valeur a l'adresse de n=%d\n",*ptr1) ;
    printf ( " La valeur a l'adresse de x=%lf\n",*ptr2) ;
    return 0;
}