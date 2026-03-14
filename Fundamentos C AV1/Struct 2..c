#include <stdio.h>
#include <math.h>
struct Produto{
    int codigo;
    float preco_custo;
    float percentual_lucro;
};

Produto ler_produto(){
    struct Produto p1;
    printf("Digite o codigo: ");
    scanf("%i", p1.codigo);
    printf("\nDigite o preco: ");
    scanf("%f", p1.preco_custo);
    printf("\nDigite o codigo: ");
    scanf("%f", p1.percentual_lucro);
    return p1;
}



int main(){
}
