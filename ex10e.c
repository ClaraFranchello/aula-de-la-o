#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define BLACK printf("\033[0;30m");
#define RED printf("\033[0;31m");
#define GREEN printf("\033[0;32m");
#define YELLOW printf("\033[0;33m");
#define BLUE printf("\033[0;34m");
#define PURPLE printf("\033[0;35m");
#define CYAN printf("\033[0;36m");
#define WHITE printf("\033[0;37m");

#define E_BRAVO  "\U0001F621"  // 😡 (8x)
#define E_RISADA "\U0001F602"  // 😂 (6x)
#define E_TONTO  "\U0001F615"  // 😕 (4x)
#define E_OCULOS "\U0001F60E"  // 😎 (2x) 

int main() {

    int pos, vet[TAM], fim = 0, aux = 0, x = 8, aux2 = 0;

    srand(time(NULL));

    for(int i = 0; i <TAM; i++){
            vet[i]= 10;
    }
    for(int i = 0; i < x; i++){
        pos = rand()%TAM;
        if(vet[pos] == 10 && aux < 8){
            vet[pos] = 18;
            aux++;
            
            
        }
        if(vet[pos] == 10 && aux < 14){
            vet[pos] = 16;
            aux++;
        }
        else{
            i--;
        }
        if(vet[pos] == 10 && aux < 18){
            vet[pos] = 14;
            aux++;
        }
        else{
            i--;
        }
        if(vet[pos] == 10 && aux < 20){
            vet[pos] = 12;
            aux++;
        }
        else{
            i--;
        }
    }
    while(fim <= 1) {
        //system("cls");
        YELLOW
        printf("|");
        for(int i = 0; i < TAM; i++) {
            printf("%02i|", i);
        }
        WHITE
        printf("\n|");
        for(int i = 0; i < TAM; i++) {
            if(vet[i] >= 10) {
                printf("??|");
            }
            else {
                GREEN
                printf("%02i", vet[i]);
                WHITE
                printf("|");
            }
        }

        if(fim == 0) {
            printf("\nPosição: ");
            scanf("%i", &pos);
            if(vet[pos] > 10){
                 vet[pos] -= 10;
                 
            }
            
            if(vet[pos] == 2) {
                aux2 = aux2 + 1;
            }
            if(aux2 == 2){
                printf("\nGanhou!!\n");
            }
        }
        else {
            fim++;
        }
    }
    


    return 0;
}