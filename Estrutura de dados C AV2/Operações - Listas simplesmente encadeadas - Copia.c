//Struct
typedef struct Lista{
    int dado;
    struct Pilha *prox;
}

// 1 Questão - (a) Inicializa
Lista *inicializa_lista(void){
    return NULL;
}

// 1 Questão - (b) insere
    //Início
    Lista *insere_lista(Lista *l1, int valor){
        Lista *no = (Lista*) malloc(sizeof(Lista));
        no->dado=valor;
        no->prox=l1;
        return no;
    }
    //Fim


// 1 Questão - (c) imprime
void imprime_lista(Lista *l1){
    Lista *aux=l1
    contador = 0;
    while(aux!=NULL){
        printf("Posição [%i]: %i" contador, l1->dado);
        contador++;
        aux=aux->prox;
    }
}

// 1 Questão - (d) busca
Lista *busca_lista(Lista *l1, int valor){
    Lista *aux=l1;
    while(aux!=NULL && aux->dado!=valor){
        aux=aux->prox;
    }
    return aux;
}


// 1 Questão - (e) remove
Lista *remove_lista(Lista *l1, int valor){
    Lista *aux=l1;
    Lista *ant=NULL;
    //Primeiro elemento
    if(l1!=NULL && l1->dado==valor){
        l1=aux->prox;
        free(aux);
        return l1;
    }
    //Elemento do meio ou fim
    while(aux!=NULL && aux->dado!=valor){
        ant = aux;
        aux = aux->prox;
    }
    //Achou
    if(aux!=NULL){
        ant->prox=aux->prox;
        free(aux);
    }
    return l1;
}

    //Elemento do meio e fim

    while(aux!=NULL && aux->valor!=dado){
        ant=aux;
        aux=aux->prox;
    }
    //achou
    if(aux!=NULL){
        ant->prox=aux->prox;
        aux=aux->prox;
        free(aux);
    }
    return l1;
}


// 1 Questão - (f) libera
Lista *libera_lista(Lista *l1){
    while(l1!=NULL){
    aux=l1->prox;
    free(l1);
    l1 = aux;
    }
    return l1;
}


