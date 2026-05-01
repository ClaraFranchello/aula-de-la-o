#include <stdio.h>

int main(){

    int altura, base, espaco, aux, div, fim, val;
    
    printf("Digite a altura: ");
    scanf("%i", &altura);
    
    aux = 1;
    fim = 0;
    div = altura / 2;
    val = div;
    if(altura >= 3){
        
        for(int i = 1 ; i <= altura; i++){
            if(fim == 0){
                for(int espaco = 1; espaco <= div; espaco++){
                    if(espaco <= div && fim == 0){
                        printf("  ");
                        if(espaco == div && aux < altura){
                            for(int emoj = 1; emoj <=aux; emoj++){
                                printf("X ");
                            }   
                        printf("\n");
                        espaco = 0;
                        div = div - 1;
                        aux = aux + 2;
                        }
                    }
                }
            }
            
            if(div == 0 && fim == 0){
                    fim = 1;
                    div = 1;
                    espaco = 1;
                    for(int base = 1; base <= altura; base++){
                        printf("X ");
                    }
                    printf("\n");
            }
            if(fim == 1){
                for(; espaco <= div; espaco++ ){
                    if(espaco <= div && div <= val){
                        printf("  ");
                        if(espaco == div && aux >= 1){
                            aux = aux - 2;
                            for(int emoj = 1; emoj <=aux; emoj++){
                                printf("X ");
                            }   
                            printf("\n");
                            espaco = 0;
                            div = div + 1;
                        }
                    }
                }
            }
        }
    }

    return 0;
}