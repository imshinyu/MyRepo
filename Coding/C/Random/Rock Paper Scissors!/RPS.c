#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    const int R=1;
    const int P=2;
    const int S=3;
    int user;
    int comp=rand()%(S-R+1)+R;
    printf("Rock: 1\n Paper: 2\n Scissors: 3\n pick a number between these two:");
    scanf("%d",&user);
    printf("i picked %d and you picked %d\n",comp,user);
    if(user==comp){
        printf("its a a tie, try again!");
        return 1;
    } else if(user==1 && comp==3) printf("Rock beats scissors! you win");
      else if(user==1 && comp==2) printf("Paper beats rock! Nah i'd Win");
      else if(user==2 && comp==1) printf("Paper beats rock! you win");
      else if(user==2 && comp==3) printf("Scissors beats paper! Nah i'd Win");
      else if(user==3 && comp==1) printf("Rock beats Scissors! Nah i'd Win");
      else if(user==3 && comp==2) printf("Scissors beats paper! you win");
}