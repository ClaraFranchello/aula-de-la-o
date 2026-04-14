#include <stdio.h>

    int main() {

    char pelcurta, pelmedia, pellonga, altura, peso, expdevida;

        printf("Possui peso maior ou igual a 30kg? [s] ou [n] ");   
        scanf(" %c", &peso);

        printf("Possui altura maior igual a 80cm? [s] ou [n] ");     
        scanf(" %c", &altura);

        printf("Possui expectativa de vida maior ou igual a 14 anos? [s] ou [n]");
        scanf(" %c", &expdevida);

         printf("Possui pelagem curta? [s] ou [n]");
        scanf(" %c", &pelcurta);
            if(pelcurta == 's'){
                if(peso == 'n' && altura == 's' && expdevida == 's' ){
                    printf(" -  Dalmata");
                }
                else if(peso == 's' && altura == 's' && expdevida == 's' ){
                    printf(" -  Bulldog Ingles");
                }
                else if(peso == 'n' && altura == 'n' && expdevida == 'n'){
                    printf(" -  Bull Terrier");
                }
            }
            else if(pelcurta == 'n'){
                if(peso == 's' && altura == 's' && expdevida == 's' ){
                    printf(" -  Pastor Alemao");
                }
                else if (peso == 's' && altura == 'n' && expdevida == 's' ){
                    printf(" -  Labrador");
                }
                else if(peso == 'n' && altura == 'n' && expdevida == 's' ){
                    printf(" -  Cocker Ingles");
                }
                if(peso == 'n' && altura == 's' && expdevida == 'n' ){
                        printf("- Sao Bernardo");
                    }
                    else if(peso == 's' && altura == 'n' && expdevida == 'n' ){
                        printf("- Chow Chow");
                    }
                    else if(peso == 'n' && altura == 'n' && expdevida == 'n' ){
                        printf("- Pequines");
                    }
            }  
            else{
                printf("Nenhuma raca encontrada");
            }
    return 0;
}