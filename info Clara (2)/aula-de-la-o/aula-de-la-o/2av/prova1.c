#include <stdio.h>

int main(){

    int ini, fim, aux;
    printf("Valor inicial e final: ");
    scanf("%i %i", &ini, &fim);
    if(ini > fim){
        aux= ini;
        ini = fim;
        fim = aux;
    }
    printf("Valores pares: ");
    for(int i = ini; i <= fim; i++){
        if(i %2 == 0){
            printf("%i ", i);
        }
    }
    
    return 0;
}