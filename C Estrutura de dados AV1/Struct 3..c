#include <stdio.h>
#include <math.h>
struct Produto{
    int codigo;
    float preco_custo;
    float percentual_lucro;
};

struct Produto ler_produto(){
    struct Produto p1;
    printf("Digite o codigo: ");
    scanf("%i", &p1.codigo);
    printf("\nDigite o preco: ");
    scanf("%f", &p1.preco_custo);
    printf("\nDigite o percentual: ");
    scanf("%f", &p1.percentual_lucro);
    return p1;
}

float calcular_preco_venda(struct Produto p){
    float precoVenda = p.preco_custo * (1 + p.percentual_lucro/100);
    return precoVenda;
}

int main(){
    struct Produto produto_criado = ler_produto();
    ;
    printf("Codigo: %i\nPreco de venda: %f\nPercentual de lucro: %f\n", produto_criado.codigo, produto_criado.preco_custo, produto_criado.percentual_lucro);
    printf("Preço de venda calculado: %f", calcular_preco_venda(produto_criado));
}
