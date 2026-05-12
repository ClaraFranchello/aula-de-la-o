#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 12

int main(){

    int vet[TAM], maior = 0, menor = 100, maiori = 0, menori = 100;

    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        vet[i] = 10 + (rand()%90);
            printf("|%02i|", i);
    }
    printf("\n");
    for(int i = 0; i < TAM; i++){
        printf("|%i|", vet[i]);
    }
    for(int i = 0; i < TAM; i++){
        if(vet[i] >= maior){
        maior = vet[i];
        maiori = i;
        }
    }
    for(int i = 0; i < TAM; i++){
        if(vet[i] <= menor){
        menor = vet[i];
        menori = i;
        }
        
    }
    printf("\n - Maior = %i  / Posição = %i\n", maior, maiori);
    printf(" - Menor = %i  / Posição = %i\n", menor, menori);

    return 0;
}