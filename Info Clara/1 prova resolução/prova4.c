#include <stdio.h>
    int main(){
        int dia, mes;

        printf("dia/mes: ");
        scanf("%i %i", &dia, &mes);

        if(dia < 1 || dia > 31 || mes < 1 || mes > 12 || dia > 28 && mes == 2 || dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11) ){
            printf("dia ou mes invalido!");
        }
        else if(dia > 22 && mes == 3 || dia >= 1 && ( mes == 4 || mes == 5) || dia < 22 && mes == 6){
            printf("- Outono");
        }
        else if(dia > 21 && mes == 6 || dia >= 1 && (mes == 7 || mes == 8 ) || dia < 22 && mes == 9){
            printf("- Inverno");
        }
        else if(dia >= 23 && mes == 9 || dia >= 1 && (mes == 10 || mes == 11) || dia < 22 && mes == 12){
            printf("- Primavera");
        }
        else{
            printf("- Verao");
        }
        return 0;
    }