#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 12

int main(){

    int vet[TAM], a = 0, aux, b = 0;

    srand(time(NULL));


    for(int i = 0; i < TAM; i++){
        vet[i] = 10 + (rand()%41);
    }
    printf("----------------------------------\n");
    for(int i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }
    printf("\n----------------------------------\n");
    for(int i = 0; i < TAM; i ++){
        if(vet[i] >= 20 && vet[i] <=40){
            a = a + 1;
        }
    }
    printf("total de numeros entre 20 e 40 = %i \n", a);
    printf("Numeros pares: ");
    for(int i = 0; i < TAM; i++){
       if(vet[i] %2 == 0){
        printf("%i ", vet[i]);
       }
    }
    printf("\n");
    for(int i = 0; i < TAM; i++){
        if(vet[i] > 35){
            b = b + 1;
        }
    }
    printf("Total de numeros maiores que 35 = %i", b);


    return 0;
}