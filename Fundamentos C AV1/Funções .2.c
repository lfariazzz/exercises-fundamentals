#include <stdio.h>
int maiorElemento(int vetor[], int tamanho){
    int maior = vetor[0];
    for(int i =0; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}


int main(){
    int vetor[3] = {100, 2, -27765};
    printf("%i", maiorElemento(vetor,3));
}
