#include <stdio.h>

int main() {

    int n1, atu, i = 1, ant, prox;

    printf("Digite um numero de termos: ");
    scanf("%i", &n1);
    
    printf(";Fibonacci (%i)= ", n1 );
    ant = 1;
    atu = 1;
    printf("1 1 ");
    for(int i = 1; i <= n1; i++){
        prox = atu + ant;
        printf("%i ", prox);
        ant = atu;
        atu = prox;

        i++;
    }
    
    
    return 0;

}