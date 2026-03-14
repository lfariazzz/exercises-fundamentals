#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Lista_restaurante{
    char nome[50];
    char endereco[50];
    char tipo_de_comida[20];
    int nota;
    struct Lista_restaurante *prox;
}Lista_restaurante;

Lista_restaurante *insere_restaurante(Lista_restaurante *l1, char nome, char endereco, char tipo_de_comida, int nota){
    Lista_restaurante *r1 = (Lista_restaurante*) malloc(sizeof(*l1));
    r1->nome=nome
    r1->endereco=endereco
    r1->tipo_de_comida=tipo_de_comida
    r1->nota=nota
    r1->prox=l1
    return r1
}
