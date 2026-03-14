#include <stdio.h>
int main(){
    #define N 3
    #define M 3
    int matriz[N][N] = {1,1,1,1,1,1,1,1,1};
    int escalar;
    printf("Digite o escalar: ");
    scanf("%i", &escalar);
    for(int i = 0; i < N; i ++){
        for (int j = 0; j < N; j++){
           matriz[i][j] = matriz[i][j] * escalar;
        }
    }
    for(int i = 0; i < N; i ++){
        printf("\n");
        for (int j = 0; j < N; j++){
           printf("%i ", matriz[i][j]);
        }
    }
}
