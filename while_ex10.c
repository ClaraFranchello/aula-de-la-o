#include <stdio.h>

int main() {

    int val1, i = 2, x = 0;

    printf("Digite um valor: ");
    scanf("%i", &val1);

    if(val1 <= 1){
        printf("numero indisponivel");
    }
    
    while(i < val1 && x == 0){  
        if(val1 % i == 0 ){
            printf("Nao primo!");
            x = 1;
        }
        i++;
    }

    if(x == 0){
        printf("Primo");
    }
   
   
    return 0;
}