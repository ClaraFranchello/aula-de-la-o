#include <stdio.h>

int main() {

    int n1, soma, aux;

    printf("Digite um numero de termos: ");
    scanf("%i", &n1);


    printf("Fibonacci (%i)= 1 1 ", n1 );
    for(int i = 1; i <= n1; i++){
        result = n1 + i;
        printf("\n%i + %i = %i",n1, i, result);
        n1 = result;
        result = n1 + i;
        }
        printf("]");
    
    return 0;
}