#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

int main(){

    int num, vet[TAM], aux = 0, fim = 0, aux2 = 0;

    srand(time(NULL));
    printf("Vetor Aleatório: ");
    
    for(int i = 0; i < TAM; i++){
        if(fim == 0 ){
        vet[i] = 10 + (rand()%11);
        printf("%i ", vet[i]);
        }   
    }
    printf("\nNumero para busca: ");
    scanf("%i", &num);
    for(int i = 0; i < TAM; i++){
        if(vet[i] == num){
            aux= aux + 1;
        }
    }
    if(aux > 0) printf("Total de ocorrencias: %i", aux);

    if(aux2 > 0){
        printf("\nencontrados no(s) indice(s): ");
        for(int i = 0; i < TAM; i++){
            if(vet[i] == num){
                aux2= aux + 1;
                printf("%i ", i);
            }
        }
    }
    if(aux == 0 && aux2 == 0){
        printf("O valor %i nao foi encontrado", num);
    }
    

    return 0;
}