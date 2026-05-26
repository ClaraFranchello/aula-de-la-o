#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 5

int main(){

    int vet[TAM];

    printf("Digite os valores: ");

    for(int i=0; i < TAM; i ++) {
        scanf("%i", &vet[i]);
    }
    
    printf("Numeros impares: ");

    for(int i=0; i < TAM; i ++) {
        if(vet[i]%2 == 1) {
            printf("%i ", vet[i]);
        }
    }
    


    return 0;
}