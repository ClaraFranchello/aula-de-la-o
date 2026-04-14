#include <stdio.h>

int main() {

    int a, b, menor, maior, i, resultado = -1;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    // descobrir menor e maior
    if(a < b){
        menor = a;
        maior = b;
    } else {
        menor = b;
        maior = a;
    }

    i = menor;

    while(i <= maior){
        if(i % 7 == 0){
            resultado = i; // sempre guarda o maior encontrado
        }
        i++;
    }

    if(resultado != -1){
        printf("Maior = %i", resultado);
    } else {
        printf("Nao existe numero divisivel por 7\n");
    }

    return 0;
}