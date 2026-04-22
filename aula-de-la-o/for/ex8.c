#include <stdio.h>

int main(){

    int val1, soma, dobro;
    printf("Digite um valor: ");
    scanf("%i", &val1);
    
    

    printf("[");
    for(int i = 1 ; i <= val1; i++){
        if(val1 %i == 0){
            if(i < val1){
                printf("%i", i);
                soma += i;
                dobro = i * 2;
            }
            if(dobro < val1 && dobro != val1){
                printf(" + ");
            }
        }
    }
    printf("]");
    if(soma == val1){
        printf(" = %i / Perfeito", val1);
    }
    else if(soma != val1){
        printf(" = %i / Imperfeito", val1);
    }
}                               