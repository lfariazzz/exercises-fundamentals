#include <stdio.h>
int main(){
    #define N 3
    int i, j, k, vetor1[N], vetor2[N], vetor3[N * 2];
    for(int i = 0; i < N; i++){
        printf("Digite o %io valor do vetor 1: ",i + 1);
        scanf("%i", &vetor1[i]);
    }
    for(int i = 0; i < N; i++){
        printf("Digite o %io valor do vetor 2: ",i + 1);
        scanf("%i", &vetor2[i]);
    }
    i = 0;
    j = 0;
    k = 0;
    while(i < N && j < N){
        if (vetor1[i] < vetor2[j]){
            vetor3[k] = vetor1[i];
            i++;
            k++;
        }
        else{
            vetor3[k] = vetor2[j];
            j++;
            k++;
        }
    }
    while(i < j){
        vetor3[k] = vetor1[i];
        i++;
        k++;
    }
    while(j < i){
        vetor3[k] = vetor2[j];
        j++;
        k++;
    }

    printf("vet 3 = [");

    for(int k = 0; k < N * 2; k++){
        printf("%i,", vetor3[k]);
    }
    printf("]");
}
