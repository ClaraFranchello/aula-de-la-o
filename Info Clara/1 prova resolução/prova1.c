#include <stdio.h>

    int main(){

        int valor, perimetro;
        printf("Digite o valor do lado: ");
        scanf("%i", &valor);

        perimetro = 4* valor;
        printf("Perimetro = %i", perimetro);
        return 0;
    }