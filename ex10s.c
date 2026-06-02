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

    int i, aux= 0, j;
    char pl[TAM], string[TAM];
    printf("String Aleatória: ");
    
    for(i = 0; i < TAM; i++){
        string[i] = 65 + (rand()%26);
        if(rand()%2 == 0){
            string[i]+= 32;
        }
        printf("%c ", string[i]);
    }
    printf("\nPalavra: ");
    fpurge(stdin);
    scanf("%[^\n]", pl);

    for(i = 0; pl[i] != '\0'; i++){
        for(j=0; j < TAM; j++){
            if(pl[i] == string[j]){
                aux++;
            }
        }
    }
    if(aux==i){
        printf("É possivel ");
    }
    else{
        printf("Nao é possivel ");
    }


}    