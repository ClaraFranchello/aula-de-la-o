#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

int main(){

    int vet[TAM], aux1=0, aux2=0;

    srand(time(NULL));
    printf("Vetor aleatorio: ");

    for(int i=0; i < TAM; i ++) {
        vet[i] = 10 + (rand()%90);
        printf("%i ", vet[i]);
    }
    printf("\nVetor rotacionado: ");
    aux1= vet[0];
    aux2 = vet[9];
    vet[0] = aux2;
    for(int i=10; i != 1; i--) {
        vet[i] = vet[i-1]; 
    }
    vet[1]=aux1;
    for(int i = 0; i < 10; i++){
        printf("%i ", vet[i]);
    }


    return 0;
}