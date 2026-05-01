#include <stdio.h>

int main(){
    int altura, emoj = 1, j = 1, emoj2 = 1, j2 = 1, val;

    printf("Altura: ");
    scanf("%i", &altura);
    val = altura;

    if(altura >= 3){   
        printf("altura: (%i)", altura);
        printf("\n");
        for(int i = 2; i <= altura; i++){
                for(; emoj<= j; emoj++){
                        if(emoj == 1 || emoj == j)printf("X ");
                        if(emoj != j)printf(" ");
                        
                }
                j+= 2;
                emoj = 1;
                if(i == altura){
                    printf("\n");
                    for(; emoj2 <= val; emoj2++){
                        printf("X ");
                    }
                }
                
                printf("\n");
                
                
        
        }

    }
    return 0;
}
    
