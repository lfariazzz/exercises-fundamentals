#include <stdio.h>
int verificarParidade(int numero){
    if(numero % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int numero, retorno;
    printf("Digite um valor: ");
    scanf("%i", &numero);
    retorno = verificarParidade(numero);
    if (retorno == 1){
        printf("E par");
    }
    else{
        printf("E impar");
    }
}
