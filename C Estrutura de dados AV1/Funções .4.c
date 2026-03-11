#include <stdio.h>
void trocarValores(int *valor1, int *valor2){
    int valor3;
    valor3 = *valor1;
    *valor1 = *valor2;
    *valor2 = valor3;
}
int main(){
    int valor1 = 1, valor2 = 2;
    printf("Antes: %i %i \n", valor1, valor2);
    trocarValores(&valor1, &valor2);
    printf("Depois: %i %i \n", valor1, valor2);
}
