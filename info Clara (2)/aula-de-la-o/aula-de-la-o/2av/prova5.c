#include <stdio.h>

int main(){
int altura, j = 1, base = 1, fim = 0, emoj = 1, aux, j1 = 1, div, val, aux2 = 1;
    
    printf("Digite a altura: ");
    scanf("%i", &altura);
    
    aux = 1;
    div = altura / 2;
    val = div;
    if(altura >= 3){
        
        for(int i = 1 ; i <= altura; i++){
            if(fim == 0){
                for(int j1 = 1; j1 <= div; j1++){
                    printf("  ");
                    if(j1 == div){
                        for(int emoj = 1; emoj <= j; emoj++){
                            if(emoj == 1 || emoj == j && aux < altura){
                                printf("X ");
                            }
                            else if(emoj != j){
                                printf("  ");
                            }
                        }
                        printf("\n");
                        j1 = 0;
                        div = div - 1; 
                        aux = aux + 2;
                        j+= 2;
                        emoj = 1;
                        aux2 = aux;    
                    }
                }
            }
            if(div == 0 && fim == 0){
                fim = 1;          
                div = 1;
                j1 = 1;
                aux = aux - 2;
                for(int base = 1; base <= altura; base++){
                    if(base == 1 || base == altura){
                        printf("X ");
                        }
                    else if(base != altura){
                        printf("  ");
                    }
                }
                printf("\n");
            }
            if(fim == 1){    
                for(int espaco = 1; espaco <= div; espaco++ ){
                    if(espaco <= div && div <= val){
                        printf("  ");
                        if(espaco == div && aux >= 1){
                            for(int emoj = 1; emoj <=aux; emoj++){
                                if(emoj == 1 || emoj == aux)printf("X ");
                                else if(emoj != aux)printf("  ");
                            }   
                            printf("\n");
                            aux = aux - 2;
                            espaco = 0;
                            div = div + 1;
                            emoj = 1;
                        }
                    }
                }
            
            }
        }
    }
    return 0;
}
