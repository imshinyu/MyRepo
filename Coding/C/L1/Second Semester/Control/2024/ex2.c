#include <stdio.h>
void rotationDiagonale_1(int M,int N,int T[][M],int A[][M]){
    int temp;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            A[i][j]=T[j][i];
        }
    }
}
void rotationDiagonale_2(int M,int N,int T[][M]){
    int temp;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<M;j++){
            temp=T[i][j];
            T[i][j]=T[j][i];
            T[j][i]=temp;
        }
    }
}

int main(){
    int N=3,M=3;
    int T[N][M];
    int A[N][M];
    int n=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
        T[i][j]=++n;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d \t",T[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    rotationDiagonale_1(M,N,T,A);

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
