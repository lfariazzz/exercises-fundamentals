#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int dado;
    struct Lista *prox;
} Lista;

Lista* inicializa_lista(void) {
    return NULL;
}

int calcula_tamanho(Lista *l1) {
    int contador = 0;
    Lista *p = l1;
    while (p != NULL) {
        contador++;
        p = p->prox;
    }
    return contador;
}

int main() {
    Lista *l1 = inicializa_lista();
    printf("Tamanho atual: %i\n", calcula_tamanho(l1));
    return 0;
}
