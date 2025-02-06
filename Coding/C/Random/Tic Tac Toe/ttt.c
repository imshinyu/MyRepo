#include <stdio.h>
#include <stdlib.h>
int main(){
    int board[3][3];
    int n;
    char cboard[3][3];
    char c;
    int count=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]=count++;
            printf("| %d |",board[i][j]);
        }
        printf("\n");
            for(int z=0;z<3;z++){
                printf("-----");
            }
        printf("\n");
    }
    printf("would u like to use X or O:");
    scanf("%c",&c);
    while(c != 'X' && c!= 'O'){
        printf("please type either X or O:");
        scanf("%c",&c);
    }
    printf("which cell u want to insert into:");
    scanf("%d",&n);
    

    return 0;
}