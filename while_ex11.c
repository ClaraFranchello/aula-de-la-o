#include <stdio.h>

int main() {

    int a, b, c, d, e, f, g, i;
    printf("Digite sete valores: ");
    scanf("%i %i %i %i %i %i %i", &a, &b, &c, &d, &e, &f, &g);
    printf("Ordem decrescente: ");
    i= 1000;
    while(i >= 0){
        if(i == a){
            printf("%i ",i);
        }
        if(i == b){
            printf("%i ",i);
        }
         if(i == c){
            printf("%i ",i);
        }
         if(i == d){
            printf("%i ",i);
        }
         if(i == e){
            printf("%i ",i);
        }
         if(i == f){
            printf("%i ",i);
        }
         if(i == g){
            printf("%i ",i);
        }

        
        i--;
    }
   
    return 0;
}