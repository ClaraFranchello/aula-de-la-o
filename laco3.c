#include <stdio.h>
#include <stdlib.h>

int main(){

    int resp, soma, div, sub, mult, desafio = 4, l1 = 0, l2 = 0, l3 = 0, l4 = 0, resp1, resp2, resp3, resp4, erros = 0, a = 4, aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;


        
            for(int i = 1; i <= desafio;){
                resp = 0;
                printf("===============================\n");
                printf("=== DESAFIO DE MATEMATICA ====\n");
                printf("===============================\n");
                if(l1 == 0){
                    printf("==== 1 - Adicao         =====\n");
                }
                if(l2 == 0){
                    printf("==== 2 - Subtracao      =====\n");
                }
                if(l3 == 0){
                    printf("==== 3 - Multiplicacao  =====\n");
                }
                if(l4 == 0){
                    printf("==== 4 - Divisao        ======\n");
                }
                printf("===============================\n ->");
                scanf("%i", &resp);
                

                for(;resp == 1 && aux1 == 0;){
                    printf("=============================\n");
                    printf("====  DESAFIO DA ADICAO  ====\n");
                    printf("=============================\n");
                    printf("==== 30 + 50 = ");
                    scanf("%i", &resp1);
                    printf("          ======\n");
                    soma = 30 + 50;
                    if(resp1 == soma){
                        printf("Acertou!\n");
                        l1 = 1;
                        aux1 = 1;
                        i = i+1;
                    }
                    else{
                        erros = erros + 1;
                        printf("errou!\n ");   
                    }
                }
                for(;resp == 2 && aux2 == 0;){
                
                    printf("=============================\n");
                    printf("====  DESAFIO DA SUBTRACAO  ====\n");
                    printf("=============================\n");
                    printf("==== 145 - 55 = ");
                    scanf("%i", &resp2);
                    printf("          ======\n");
                    sub = 145 - 55;
                    if(resp2 == sub){
                        printf("Acertou!\n");
                        l2 = 1;
                        aux2 = 1;
                        i = i+1;
                        
                    }
                    else{
                        erros = erros + 1;
                        printf("errou!\n");
                        
                    }
                }
                    
                    
                for(;resp == 3 && aux3 == 0;){
                    printf("=============================\n");
                    printf("====  DESAFIO DA MULTIPLICACAO  ====\n");
                    printf("=============================\n");
                    printf("==== 14 X 14 = ");
                    scanf("%i", &resp3);
                    printf("          ======\n");
                    mult = 14 * 14;
                    if(resp3 == mult){
                        printf("Acertou!\n");
                        l3 = 1;
                        aux3 = 1;
                        i = i+1;
                        
                    }
                    else{
                        erros = erros + 1;
                        printf("errou!\n");
                        
                    }
                }
                
                for(;resp == 4 && aux4 == 0;){
                    printf("=============================\n");
                    printf("====  DESAFIO DA DIVISAO  ====\n");
                    printf("=============================\n");
                    printf("==== 780 / 78 = ");
                    scanf("%i", &resp4);
                    printf("          ======\n");
                    div = 780/78;
                    if(resp4 == div){
                        printf("Acertou!\n");
                        l4 = 1;
                        aux4 = 1;
                        i = i+1;
                    
                    }
                    else{
                        erros = erros + 1;
                        printf("errou!\n");
                        
                    }
                }
                    if(l1 == 1 && l2 == 1 && l3 == 1 && l4 == 1){
                        printf("Voce concluiu o desafio!\n");
                        printf("Voce errou %i vezes", erros);
                    }
                }


            
        
        return 0;
}