#include <stdio.h>
#include <stdbool.h>

int main(){
    #define N 3
    int i, j, k, x, soma, resto = 0, vetor1[N], vetor2[N], vetor3[N];
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
            soma = vetor1[k] + vetor2[k] + resto
            if(soma<10){
                soma = vetor3[k];
                resto = 0;
            }
            else{
                vetor3[k] = soma - 10;
                resto = 1;
            }
    }
}
