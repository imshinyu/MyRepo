#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * @brief Calculate the n-th Fibonacci number.
 *
 * This program asks the user for a number n, and then
 * calculates the n-th Fibonacci number, which is the sum
 * of the two preceding numbers in the Fibonacci sequence.
 *
 * The Fibonacci sequence is defined as follows:
 * U0 = 0
 * U1 = 1
 * Un = Un-1 + Un-2 for n >= 2
 *
 * @return 0 if the program runs successfully.
 */
int main(){
    int n,u0=0,u1=1,un;
    printf("give me n:");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        un=u1+u0;
        u0=u1;
        u1=un;
    }
    printf("U%d=%d",n,un);
    return 0;
}