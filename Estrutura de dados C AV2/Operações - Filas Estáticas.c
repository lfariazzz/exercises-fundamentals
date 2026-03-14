//Struct
#define TAM 10
typedef struct Fila{
    int dado[TAM];
    int fim;
}Fila;

//Inicializar
Fila inicializa_fila(Fila *f1){
    f1->fim=-1;
}

//Fila Cheia
int fila_cheia(Fila *f1){
    if(f1->fim<TAM-1){
        return 0;
    }
    return 1;
}

//Inserir
int inserir_fila(Fila *f1, int valor){
    if(!fila_cheia(f1)){
        f1->fim++;
        f1->dado[f1->fim] = valor;
        return 1;
    }
    return 0;
}

//Fila Vazia
int fila_vazia(Fila *f1){
    if(f1->fim>-1){
        return 0;
    }
    return 1;
}

//Remover
int remover_fila(Fila *f1){
    int valor;
    if(!fila_vazia(f1)){
        for(i=0, i<f1->fim, i++){
            f1->dado[i] = f1->dado[i+1];
        }
        f1->fim--;
        return 1
    }
    return 0
}



