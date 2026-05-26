#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 5

int main(){

    int vet[TAM], soma=0, div=0;

    srand(time(NULL));
    printf("Vetor inicial: ");

    for(int i=0; i < TAM; i ++) {
        vet[i] = rand()%10;
        printf("%i ", vet[i]);
    }

    for(int i=0; i < TAM; i ++) {
        soma += vet[i];
        if(i==4){
            div = soma / 5;
            vet[TAM/2] = div;
        }
    }
    printf("\nVetor final: ");
    for(int i=0; i < TAM; i ++) {
        printf("%i ", vet[i]);
    }


    return 0;
}