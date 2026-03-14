
//Struct
typedef struct Arvore{
    int dado;
    struct Arvore *esq, *dir;
}Arvore;

//Inicializa
Arvore *inicializa_arvore(void){
    return NULL;
}

//Cria
Arvore *cria_arvore(int valor){
    Arvore *raiz = (Arvore*) malloc(sizeof(Arvore));
    raiz->dado=valor;
    raiz->esq=NULL;
    raiz->dir=NULL;
    return raiz;
}

//Insere
Arvore *insere_arvore(Arvore *raiz, int valor){
    if(raiz==NULL){
        return cria_arvore(valor);
    }
    if(valor<raiz->dado){
        raiz->esq = insere_arvore(raiz->esq, valor);
    }
    else{
        raiz->dir= insere_arvore(raiz->dir, valor);
    }
    return raiz;
}

//Busca
Arvore *busca_arvore(Arvore *raiz, int valor){
    if(raiz==NULL || raiz->dado==valor){
        return raiz;
    }
    if(valor<raiz->dado){
        return busca_arvore(raiz->esq, valor);
    }
    return busca_arvore(raiz->dir, valor);
}

//Remove
Arvore *remove_arvore(Arvore *raiz, int valor){
    if(raiz==NULL) return NULL;

    //Busca valor
    if(valor<raiz->dado){
        raiz->esq = remove_arvore(raiz->esq, valor);
    }
    else if(valor>raiz->dado){
        raiz->dir = remove_arvore(raiz->dir, valor);
    }
    //Achou valor
    else{
        if(raiz->esq==NULL){
            Arvore *aux = raiz->dir;
            free(raiz);
            return aux;
        } //Sobe filho da direita ou NULL.
        else if(raiz->dir==NULL){
            Arvore *aux=raiz->esq;
            free(raiz);
            return aux;
        } // Sobe filho da esquerda ou NULL.
        else{
            //Busca o valor compensador-valor que vai substituir o nó removido
            //que é o menor valor da maior subarvore
            //(ou o maior valor da menor subarvore)
            Arvore *aux  = raiz->dir;
            while(aux->esq!=NULL) aux=aux->esq;

            //Troca a informação (mantendo os endereços)
            raiz->dado=aux->dado;
            //Remove o nó debaixo que ficou duplicado
            raiz->dir = remove_arvore(raiz->dir, aux->dado);
        }
        return raiz;
    }
}

//Destrói
Arvore *destroi_arvore(Arvore *raiz){
    if(raiz!=NULL){
        destroi_arvore(raiz->esq);
        destroi_arvore(raiz->dir);
        free(raiz);
    }
    return raiz;
}

//Quantidade de nós
int conta_nos(Arvore *raiz){
    if(raiz==NULL){
        return 0;
    }
    return 1 + conta_nos(raiz->esq) + conta_nos(raiz->dir);
}


//Altura da árvore
int altura_arvore(Arvore *raiz){
    if(raiz==NULL){
        return -1;
    }
    int esq = altura_arvore(raiz->esq);
    int dir = altura_arvore(raiz->dir);
    if (esq>dir){
             return 1 + esq;
    }
    else{
        return 1 + dir;
    }
}

//Percorre
    //pré-ordem
    void pre_ordem(Arvore *raiz){
        if(raiz!=NULL){
            printf("%i, ", raiz->dado);
            pre_ordem(raiz->esq);
            pre_ordem(raiz->dir);
        }
    }

    //em-ordem
    void em_ordem(Arvore *raiz){
        if(raiz!=NULL){
            em_ordem(raiz->esq);
            printf("%i, ", raiz->dado);
            em_ordem(raiz->dir);
        }
    }

    //pós-ordem
    void pos_ordem(Arvore *raiz){
        if(raiz!=NULL){
            pos_ordem(raiz->esq);
            pos_ordem(raiz->dir);
            printf("%i, ", raiz->dado);
        }
    }

