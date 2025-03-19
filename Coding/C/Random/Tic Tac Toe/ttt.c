#include <stdio.h>
#include <stdlib.h>
int main(){
    char arr[3][3];
    int r,c;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]='-';
        }    
    }
    printf("  1 2 3\n");
    printf("1 - - -\n");
    printf("2 - - -\n");
    printf("3 - - -\n");
    printf("Player X,enter row and column:\n");
    scanf("%d %d",&r,&c);
    arr[c][r]='x';
    printf("Player O,enter row and column:\n");
    scanf("%d %d",&r,&c);
    arr[c][r]='O';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", (int)arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}