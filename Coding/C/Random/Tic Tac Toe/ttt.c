#include <stdio.h>
#include <stdlib.h>
int check(int r,int c,char arr[4][4]){
    int count=0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if(arr[i][j]=='X' || arr[i][j]=='O'){
                if(i==r && j==c) count++;
            }
        }
    }
    if(count!=0) return -1;
    else return 0;
}
int main(){
    char arr[4][4];
    int r,c;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            arr[i][j]='-';
        }    
    }
    printf("  1 2 3\n");
    printf("1 - - -\n");
    printf("2 - - -\n");
    printf("3 - - -\n");
    int i=0;
    int rstl;
    do{
        rstl=-1;
        printf("Player X,enter row and column:\n");
        scanf("%d %d",&r,&c); 
        while(rstl==-1 && i!=0){
            printf("this place is taken,try again:");
            scanf("%d %d",&r,&c);
            rstl=check(r,c,arr);
        }
        i++;
        rstl=-1;
        arr[r][c]='X';
        printf("Player O,enter row and column:\n");
        while(rstl==-1 || i!=0){
            printf("this place is taken,try again:");
            scanf("%d %d",&r,&c);
            rstl=check(r,c,arr);
        }
        i++;
        arr[r][c]='O';
    }while(i<6);
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%c ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}