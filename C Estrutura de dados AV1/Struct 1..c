#include <stdio.h>
#include <math.h>

struct vetor2D{
    float x;
    float y;
};

struct vetor2D criar_vetor(float x, float y){
    struct vetor2D vetor1;
    vetor1.x = x;
    vetor1.y = y;
    return vetor1;
}

int calcular_modulo(struct vetor2D *ptrStruct){
    float modulo;
    modulo = sqrt((ptrStruct->x * ptrStruct->x) + (ptrStruct->y * ptrStruct->y));
    return modulo;
}

int main(){
    float x,y;
    printf("Digite o valor de x e de y: ");
    scanf("%f %f", &x, &y);
    struct vetor2D vetor1 = criar_vetor(x, y);
    float  modulo = calcular_modulo(&vetor1);
    printf("\nMódulo: %f", modulo);
}
