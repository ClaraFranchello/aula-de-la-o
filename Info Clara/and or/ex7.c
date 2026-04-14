#include <stdio.h>

int main() {

    int numero,centena, dezena, unidade;


    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%i", &numero);

    if(numero < 100 && numero > 999){
        printf("numero nao tem tres digitos!");
    }
    else if(numero >=100 && numero <= 999){
        centena = numero / 100;
        dezena = (numero %100) / 10;
        unidade = numero %10 ;

        if(centena == dezena && dezena == unidade){
            printf("Triangulo Equilatero\n");
        }
        else if(centena == dezena & dezena != unidade || centena == unidade && unidade != dezena || dezena == unidade && unidade != centena){
            printf("Triangulo Isosceles\n");
    }
        else if(centena != dezena && dezena != unidade && centena != unidade){
         printf("Triangulo Escaleno\n");   
        }
    }

    return 0;
}