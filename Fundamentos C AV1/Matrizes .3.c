#include <stdio.h>
int main(){
    #define N 3
    #define M 3
    int matriz[N][N] = {1,3,3,4,5,6,7,8,1};
    float soma = 0, elementos = 0;
    float media;
    for(int i = 0; i < N; i ++){
        for (int j = 0; j < N; j++){
           soma += matriz[i][j];
           elementos ++;
        }
    }
    for(int i = 0; i < N; i ++){
        printf("\n");
        for (int j = 0; j < N; j++){
           printf("%i ", matriz[i][j]);
        }
    }
    media = soma / elementos;
    printf("\nA média é %f", media);
}
