#include <stdio.h>

int main(){

    int n, fat = 1, i;

    printf("Digite o valor para a fatoracao: ");
    scanf("%i", &n);

    i = 1;

    printf("Fatorial(%i) = ", n);

    if(n == 0 || n == 1){
        printf("fatoracao e igual a 1");
    }
    else if(n < 0){
        printf("fatoracao indisponivel");
    }
    else{
        while(i <= n){
            fat = fat * i;

            printf("%i", i);

            if(i < n){
                printf(" x ");
            }

            i++;
        }
        printf(" = %i", fat);
    }
    return 0;
}