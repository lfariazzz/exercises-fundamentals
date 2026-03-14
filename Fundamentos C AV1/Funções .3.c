#include <stdio.h>
int contaVogal(char palavra[]){
    int quantidade_vogal = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'e' || palavra[i] == 'E' || palavra[i] == 'i' || palavra[i] == 'I' || palavra[i] == 'o' || palavra[i] == 'O' || palavra[i] == 'u' || palavra[i] == 'U'){
            quantidade_vogal++;
        }
    }
    return quantidade_vogal;
}
int main(){
    int quantidade_vogal;
    char palavra[] = "palavra";
    quantidade_vogal = contaVogal(palavra);
    printf("%i", quantidade_vogal);
}
