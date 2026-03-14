//Struct
typedef struct Pilha{
    int dado;
    struct Pilha *prox;
}Pilha;

//Inicializar
Pilha *inicializa_pilha(void){
    return NULL;
}

    //AlocaNo
    Pilha *AlocaNo(int valor){
        Pilha *p = (Pilha*) malloc(sizeof(Pilha));
        p->dado=valor;
        p->prox=NULL;
        return p;
    }

//Push
Pilha *push(Pilha *p, int valor){
    Pilha *novo = AlocaNo(valor);
    novo->prox=p;
    return novo;
}

//Pilha Vazia
int pilha_vazia(Pilha *p){
    if (p==NULL){
        return 1;
    }
    return 0;
}

//Pop


//Imprimir
void imprime_pilha(Pilha *p){
    if(!pilha_vazia(p)){
        while(p!=NULL){
            printf("%i ", p->dado);
            p=p->prox;
        }
    }
}



//Liberar
Pilha *libera_pilha(Pilha *p){
    if(!pilha_vazia(p)){
        while(p!=NULL){
            Pilha *aux = p;
            aux=aux->prox;
            free(p);
            p=aux;
            }
    }return p;
}
