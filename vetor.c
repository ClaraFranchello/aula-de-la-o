#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

int main(){

    int veta[10], aux = 0, aux2 = 0;
    srand(time(NULL));

    printf("Vetor Aleatório: ");
    for(int i = 0; i < TAM; i++){
        if(aux == 0){
            printf("Com repeticao -> %i\n", TAM);
            aux = 1;
        }
        if(aux == 1)
        veta[i] = 10 + rand()%11;
    }
    for(int i = 0; i < TAM; i++){
        printf("%i ", veta[i]);
        aux = veta[i];
        for()
    }
}
