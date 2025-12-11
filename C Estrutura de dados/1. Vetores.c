#include <stdio.h>



int main(){

    #define N 5

    int vetor[N];

    printf("Digite os valores do vetor: ");

    scanf("%i %i %i %i %i", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4]);

    printf("(%i) (%i) (%i) (%i) (%i)", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

}
