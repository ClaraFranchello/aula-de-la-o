#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 12
int main(){

    int num, vet[TAM], fim =  0;

    srand(time(NULL));

    printf("- Vetor Aleatorio: ");
    for(int i = 0; i < TAM; i++){
        if(fim == 0){
            vet[i] = rand()%100;
            printf("%i ",vet[i]);
            if(i == 11){
                fim = 1;
                printf("\n- Vetor ordenado: ");
            }
        }
        if(fim == 1){
            for(int a = 100; a > -1; a--){
                for(int j = 0; j <TAM; j++){
                    if(a == vet[j]){
                    printf("%i ", a);
                    }
                }
            }
        }   
    }
    return 0;
}