#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 6

int main(){

    int veta[TAM],vetb[TAM], vetc[TAM+TAM], aux = 0;

    srand(time(NULL));
    printf("A > ALE: ");

    for(int i = 0; i < TAM; i++){
        veta[i]= 10 + (rand()%90);
        printf("%i ", veta[i]);
        if(i == 5){
            aux = 1;
            printf("\n");
            printf("\nA > ORD: ");
        }
        if(aux == 1){
            for(int i = 0; i < 100; i++){
                if(i == veta[i]){
                    printf("%i ", i);
                }
            }
        }
    }
    printf("\nB > ALE: ");
     for(int i = 0; i < TAM; i++){
        vetb[i]= 10 + (rand()%90);
        printf("%i ", vetb[i]);
        if(i == 5){
            aux = 2;
            printf("\n");
            printf("\nB > ORD: ");
        }
        if(aux == 2){
            for(int i = 0; i < 100; i++){
                if(i == vetb[i]){
                    printf("%i ", i);
                }
            }
        }
    }
     printf("\nA > ORD: ");
     
    return 0;
}