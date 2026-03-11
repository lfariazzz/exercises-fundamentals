#include <stdio.h>
int somarVetor(int *ptrVetor, int tamanho){
    int somador = 0;
    for (int i = 0; i < tamanho; i++){
        somador += *(ptrVetor + i);
    }
    return somador;
}


int main(){
    int vetor[] = {1,2,3};
    int soma = somarVetor(vetor, 3);
    printf("%i", soma);
}
