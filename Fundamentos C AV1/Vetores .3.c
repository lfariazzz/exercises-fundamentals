#include <stdio.h>

int main(){
    #define N 3
    int x, vetor1[N], vetor2[N], vetor3[N + 1];
    int resto = 0;
    for(int i = 0; i < N; i++){
        printf("Digite um digito de 0 a 9 da posicao %i do vetor 1: ", i + 1);
        scanf("%i", &vetor1[i]);
        while (vetor1[i] > 9 || vetor1[i] < 0){
            printf("Digite um valor valido");
            scanf("%i", &vetor1[i]);
        }
    }
    for(int i = 0; i < N; i++){
        printf("Digite um digito de 0 a 9 da posicao %i do vetor 2: ", i + 1);
        scanf("%i", &vetor2[i]);
        while (vetor2[i] > 9 || vetor2[i] < 0){
            printf("Digite um valor valido");
            scanf("%i", &vetor2[i]);
        }
    }
    for (int i = N - 1; i >= 0; i--){
        if(vetor1[i] + vetor2[i] + resto < 10){
            vetor3[i + 1] = vetor1[i] + vetor2[i] + resto;
            resto = 0;
        }
        else{
            vetor3[i + 1] = vetor1[i] + vetor2[i] - 10 + resto;
            resto = 1;
        }
        vetor3[0] = resto;
    }
    for(int i = 0; i <= 3; i++){
        printf("(%i)", vetor3[i]);
    }
}
