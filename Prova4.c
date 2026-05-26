#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 7

int main(){

    int vet[TAM], j = TAM - 1, i, aux = 0;

    printf("Valores inteiros: ");

    for(int i = 0; i < TAM; i++){
        scanf("%i", &vet[i]);
    }
    i=TAM-1;
    for(int k = 0; k < TAM/2; k++){
        if(vet[k] == vet[i]){
            aux +=1;
            i--;
        }
    }
    if(aux == TAM/2){
        printf("Palindromo!");
    }
    else{
        printf("Não palindromo");
    }
    return 0;
}