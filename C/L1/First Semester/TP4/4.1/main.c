#include <stdio.h>
#include <stdlib.h>

void Draw_line(int n, char c){
    for(int i=0;i<n;i++){
        printf("%c",c);
    }
}
void Draw_square(int n, char c){
    for(int i=0;i<n;i++){
        Draw_line(n,c);
        printf("\n");
    }
}
void Draw_triangle(int n, char c, int d){
    if(d==0){
    for(int i=0;i<n+1;i++){
        Draw_line(n,c);
        printf("\n");
        n--;
    }
    } else {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    }
}
void Draw_large_triangle(int n,char c){
    Draw_triangle(n,c,0);
    Draw_triangle(n,c,1);
}
int main(){
    int n,d;
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    printf("enter a number:");
    scanf("%d",&n);
    printf("enter the direction of the triangle (1 is down, 0 is up):");
    scanf("%d",&d);
    //Draw_line(n,c);
    printf("\n");
    //Draw_triangle(n,c,d);
    printf("\n");
    //Draw_square(n,c);
    printf("\n");
    Draw_large_triangle(n,c);
    return 0;
}