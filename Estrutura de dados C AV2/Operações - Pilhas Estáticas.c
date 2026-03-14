//Struct
#define TAM 10
typedef struct Pilha{
    int dado[TAM];
    int topo;
}Pilha;

//Inicializa
Pilha inicializa_pilha(Pilha *p1){
    p1->topo=-1
}

//Pilha cheia
int pilha_cheia(Pilha *p1){
    if(p1->topo<TAM-1){
        return 0;
    }
    return 1;
}

//Pilha vazia
int pilha_vazia(Pilha *p1){
    if (p1->topo>-1){
        return 0;
    }
    return 1;
}

//Push
Pilha *push(Pilha *p1, int valor){
    if (!pilha_cheia(p1)){
        p1->topo++;
        p1->dado[p1->topo] = valor;
    }
    return p1;
}

//Pop
Pilha *pop(Pilha *p1){
    if(!pilha_vazia(p1)){
        p1->topo--;
    }
    return p1;
}

//Imprimir (topo à base sem remover)
void imprimir_pilha(Pilha *p1){
    if(!pilha_vazia(p1)){
        for (int i=p1->topo; i>-1; i--){
            printf("Elemento %i: %i\n", i, p1->dado[i]);
        }
    }
}
