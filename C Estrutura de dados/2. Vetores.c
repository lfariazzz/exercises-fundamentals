#include <stdio.h>
#include <stdbool.h>

int main(){
    #define N 5
    int vetor[N];
    int x,y,i,j,k;
    for(int i = 0; i < N; i++){
        printf("Digite o %i o valor do vetor: ", i + 1);
        scanf("%i", &vetor[i]);
    }
    for(int i = 0; i < N; i++){
        printf("(%i)", vetor[i]);
    }


    printf("\nDigite um valor X:");
    scanf("%i", &x);
    bool valor_encotrado_x = false;
    for(int j = 0; j < N; j++){
        if(x == vetor[j]){
            valor_encotrado_x = true;
        }
    }
    if (valor_encotrado_x){
        printf("O número %i existe\n", x);
    }


    printf("Digite um valor Y:");
    scanf("%i", &y);
    bool valor_encotrado_y = false;
    for(int k = 0; k < N; k++){
        if(y == vetor[k]){
            valor_encotrado_y = true;
        }
    }
    if (valor_encotrado_y == false){
        for(int i = 0; i < N; i++){
            if(vetor[i] == x){
                vetor[i] = y;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("(%i)", vetor[i]);
    }
}
