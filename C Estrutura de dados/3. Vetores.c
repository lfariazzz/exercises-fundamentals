#include <stdio.h>
#include <stdbool.h>

int main(){
    #define N 3
    int i, j, k, x, soma, resto = 0, vetor1[N], vetor2[N], vetor3[N + 1];
    for(int i = 0; i < N; i++){
        printf("Digite um valor de 0 a 9 para adicionar na %i a posicao vetor: ", i + 1);
        scanf("%i", &x);
        if(x < 10 && x >= 0){
            vetor1[i] = x;
        }
        else{
            while(x >= 10 || x < 0){
                printf("\nValor invalido. Digite um valor válido: ");
                scanf("%i", &x);
            }
        vetor1[i] = x;
        }
    }

    for(int j = 0; j < N; j++){
        printf("Digite um valor de 0 a 9 para adicionar na %i a posicao vetor: ", j + 1);
        scanf("%i", &x);
        if(x < 10 && x >= 0){
            vetor2[j] = x;
        }
        else{
            while(x >= 10 || x < 0){
                printf("\nValor invalido. Digite um valor válido: ");
                scanf("%i", &x);
            }
        vetor2[j] = x;
        }
    }

    for(int k = N - 1; k >= 0; k--){
            soma = vetor1[k] + vetor2[k] + resto;
            if(soma<10){
                 vetor3[k + 1] = soma;
                resto = 0;
            }
            else{
                vetor3[k + 1] = soma - 10;
                resto = 1;
            }
    }
    vetor3[0] = resto;
    for(int i = 0; i < N; i++){
        printf("(%i)", vetor1[i]);
            }
            printf("\n");
    for(int i = 0; i < N; i++){
        printf("(%i)", vetor2[i]);
            }
            printf("\n");
    for(int i = 0; i <= N; i++){
        printf("(%i)", vetor3[i]);
    }
}
