#include <stdio.h>
void maxMin(int vetor[], int tamanho, int *min, int *max){
    int maior_valor = vetor[0];
    int menor_valor = vetor[0];
    for(int i = 0; i < tamanho; i++){
        if (vetor[i] > maior_valor){
            maior_valor = vetor[i];
        }
        if (vetor[i] < menor_valor){
            menor_valor = vetor[i];
        }
    }
    *min = menor_valor;
    *max = maior_valor;
}


int main(){
    int lista[] = {1,2,3,4,5};
    int menor, maior;
    maxMin(lista, 5, &menor, &maior);
    printf("%i %i", menor, maior);
}
