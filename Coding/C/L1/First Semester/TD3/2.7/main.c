#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1=1,n=0;
    int s=0,m=0;
    int cheapest = 0, most_expensive = 0;
    printf("list of prices (enter 0 to stop):\n");
    while(n1!=0){
        scanf("%d",&n1);
        if(n1==0) break;
        s+=n1;
        n++;
        m=s/n;
        if (n == 1) {
            cheapest = most_expensive = n1;
        } else {
            if (n1 < cheapest) {
                cheapest = n1;
            }
            if (n1 > most_expensive) {
                most_expensive = n1;
            }
        }
        
    }
    if(n1==0){
        printf("The total cost of the purchased items is :%d\n",s);
        printf("The average price of the purchased items is:%d\n",m);
        printf("The cheapest item costs:%d\n",cheapest);
        printf("The most expensive item costs:%d\n",most_expensive);
    }
    return 0;
}