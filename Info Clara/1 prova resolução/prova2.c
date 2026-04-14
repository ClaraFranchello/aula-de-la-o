#include <stdio.h>
    int main(){
        float peso, altura, imc;

        printf("digite seu peso [kg]: ");
        scanf("%f", &peso);
        printf("digite sua altura [m]: ");
        scanf("%f", &altura);

        imc= peso/(altura * altura);
        printf("IMC = %.2f ", imc);
        return 0;
    }