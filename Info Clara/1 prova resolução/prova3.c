#include <stdio.h>
    int main(){
       
        int a1, a2, a3;

        printf("Digite os tres angulos: ");
        scanf("%i %i %i", &a1, &a2, &a3);

        if(a1 < 1 || a1 > 180 || a2 < 1 || a2 > 180 || a3 < 1 || a3 > 180){
              printf("Angulo inesistente!");
        }
        else if(a1 == 90 || a2 == 90 || a3 == 90){
            printf("- Retangulo!");
        }
        else if(a1 < 90 && a2 < 90 && a3 < 90){
            printf("- Acutangulo!");
        }
        else if(a1 > 90 || a2 > 90 || a3 > 90){
            printf("- Obtusangulo!");
        }
        
        return 0;
    }