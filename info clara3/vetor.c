#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

int main(){

    int vet[TAM], soma;

    srand(time(NULL));


    for(int i = 0; i < TAM; i++){
        vet[i] = rand()%10;
    }
    for(int i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }
    for(int i = 0; i < TAM; i++){
       soma += vet[i];
    }
    printf(" \n Soma = %i ", soma);


    return 0;
}