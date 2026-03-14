//Struct
typedef struct Arvore{
    int dado;
    struct Arvore *esq, *dir;
}Arvore;

//Destruição

//Fator de Balanceamento
    //Altura da Árvore
    int altura_arvore(Arvore *raiz){
        if(raiz==NULL){
            return -1;
        }
        int esq = altura_arvore(raiz->esq);
        int dir = altura_arvore(raiz->dir);

            if(esq>dir){
                return 1 + esq;
            }
            else{
                return 1 + dir;
            }
    }
    //Fator em Si
    int fator_balanceamento(Arvore *raiz){
        if(raiz==NULL){
            return 0;
        }
        return altura_arvore(raiz->esq) - altura_arvore(raiz->dir);
    }

//Rotação à Direita
Arvore *rotacao_LL(Arvore *a){
    if (a==NULL){
        return a;
    }
    Arvore *b = a->esq;
    a->esq=b->dir;
    b->dir->a;
    return b;
}

//Rotação à Esquerda
Arvore *rotacao_RR(Arvore *a){
    if(a==NULL){
        return a;
    }
    Arvore *b = a->dir;
    a->dir=b->esq;
    b->esq = a;
    return b;
}

//Rotação Dupla à Direita
Arvore *rotacao_LR(Arvore *a){
    a->esq = rotacao_RR(a->esq);
    return rotacao_LL(a);
}

//Rotação Dupla à Esquerda
Arvore *rotacao_RL(Arvore *a){
    a->dir = rotacao_LL(a->dir);
    return rotacao_RR(a);
}

//Inserção
Arvore *insere_AVL(Arvore *raiz, int valor){
    //Inserção padrão
    if (raiz==NULL){
        return criar_arvore;
    }
    if(valor<raiz->dado){
        raiz->esq = insere_AVL(raiz->esq, valor)
    }
    if else(valor>raiz->dado){
        raiz->dir = insere_AVL(raiz->dir, valor);
    }
    else{
        return raiz;
    }
    //Confere o Fator de balanceamento do pai
    int fb_pai = fator_balanceamento(raiz);

    //Associação com os sinais
    if (fb_pai > 1){
        int fb_filho = fator_balanceamento(raiz->esq);
        if (fb_filho>=0){
            return rotacao_LL(raiz);
        }
        else{
            return rotacao_LR(raiz);
        }
    }
    if (fb_pai < -1){
        int fb_filho = fator_balanceamento(raiz->dir);
        if (fb_filho>=0){
            return rotacao_RL(raiz);
        }
        else{
            return rotacao_RR(raiz);
        }
    }
    return raiz;
}

//Balancear + Remover
