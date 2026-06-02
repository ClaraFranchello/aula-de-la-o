#include <stdio.h>
#include<stdlib.h>
#include <time.h>


#define COR_VERMELHO printf("\33[31m");
#define COR_VERDE printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_AZUL printf("\33[34m");
#define COR_ROXO printf("\33[35m");
#define COR_BRANCO printf("\33[37m");
#define TAM 10

int main(){

    srand(time(NULL));

    int i, j;
    char stringj[TAM], vet[TAM];
    printf("String Aleatória: ");
    
    for(i = 0; i < TAM; i++){
        vet[i] = 65 + (rand()%26);
        printf("%c ", vet[i]);
    }

    for(i = 0; i < TAM; i++){
        for(j = i+1; j < TAM; j++){
            if(vet[i] == vet[j]){
                vet[i] = 64;
                vet[j] = 64;
            }
        }
    }
     printf("\n String Alterado: ");
     for(i = 0; i < TAM; i++){
       COR_BRANCO
        if(vet[i] == 64){
            COR_AZUL
        }
        printf("%c ", vet[i]);
     }
     COR_BRANCO
    

     return 0;
}