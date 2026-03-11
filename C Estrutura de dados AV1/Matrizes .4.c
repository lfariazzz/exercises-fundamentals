#include <stdio.h>
int main(){
    #define N 2
    #define M 2
    int matriz[N][N] = {-5,2,4,-3};
    int determinante = (matriz[1][1] * matriz[0][0]) - (matriz[0][1] * matriz[1][0]);

    for(int i = 0; i < N; i ++){
        printf("\n");
        for (int j = 0; j < N; j++){
           printf("%i ", matriz[i][j]);
        }
    }
    printf("\nA determinante e %i", determinante);
}
