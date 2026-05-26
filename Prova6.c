#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

int main(){

    int vet[TAM], maior1 = -51, maior2 = -52, aux = -51;
    srand(time(NULL));

    printf("Vetor aleatorio: ");

    for(int i=0; i < TAM; i ++) {
        vet[i]= (rand()%101) - 50;
        printf("%i ", vet[i]);
        if(vet[i]> maior1){ 
            maior2 = maior1;
            maior1 = vet[i];
        }
        else{
            aux = 1;
        }
        if(vet[i]> maior2 && aux == 1 && vet[i] != maior1){
            maior2 = vet[i];
        }
    }
    printf("\n1 Maior: %i", maior1);
    printf("\n2 Maior: %i", maior2);
    
    
    


    return 0;
}