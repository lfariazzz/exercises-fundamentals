//Struct
typedef struct No{
    int info;
    struct No *dir, *esq;
}No;

//Inicializa/Cria
No *inicializa_arvore(void){
    return NULL;
}

No *cria_no(int info){
    No *novo = (No*) malloc(sizeof(No));
    novo->info=info;
    novo->dir=NULL;
    novo->esq=NULL;
    return novo;
}
//Insere
No *insere_no(No *raiz, int info){
    if (raiz == NULL){
        return cria_no(info)
    }
    if(info > raiz->info){
        raiz->dir = insere_no(raiz->dir, info)
    }
    else{
        raiz->esq = insere_no(raiz->esq, info)
    }
    return raiz;
}

//Acesso/Busca
No *busca_arvore(No *raiz, int info){
    if(raiz == NULL || raiz->info==info){
        return raiz;
    }
    if(info > raiz->info){
        return busca_arvore(raiz->dir, info);
    }
    else{
        return busca_arvore(raiz->esq, info);
    }
}

//Remove
    //Folha
    //1 Filho
    //2 Filhos

//Destrói
No *destroi_arvore(No *raiz){
    if(raiz==NULL){
        return raiz;
    }
    destroi_arvore(raiz->dir);
    destroi_arvore(raiz->esq);
    free(raiz);
}
//Quantidade de nós
int contar_nos(No *raiz){
    if(raiz==NULL){
        return 0;
    }
    else{
        return 1 + contar_nos(no->dir) + contar_nos(no->esq);
    }
}

//Altura da árvore
int altura_arvore(No *raiz){
    if(raiz==NULL){
        return -1;
    }
    else{
        int esq = altura_arvore(raiz->esq);
        int dir = altura_arvore(raiz->dir);
        if (esq>dir){
            return 1 + esq;
        }
        else{
            return 1 + dir;
        }
    }
}
//Percorre
    //pré-ordem
    void pre_ordem(No *raiz){
        if(raiz!=NULL){
            printf("%i", raiz->dado);
            pre_ordem(raiz->esq);
            pre_ordem(raiz->dir);
        }
    }

    //em-ordem
    void em_ordem(No *raiz){
    if(raiz!=NULL){
            em_ordem(raiz->esq);
            printf("%i", raiz->dado);
            em_ordem(raiz->dir);
        }
    }
    //pós-ordem
    void pos_ordem(No *raiz){
        if(raiz!=NULL){
            pos_ordem(raiz->esq);
            pos_ordem(raiz->dir);
            printf("%i", raiz->dado);
        }
    }
