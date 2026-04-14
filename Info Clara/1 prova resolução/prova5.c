#include <stdio.h>
    int main(){
        int portas, p1, p2, p3, p4, p5;
        printf("Quantidade de portas: ");
        scanf("%i", &portas);

        if(portas < 1 || portas > 9 || portas == 1 || portas > 5){
            printf("Quantidade de portas invalida!");
        }
        else{
            if(portas == 2){
                printf("Digite o numero das 2 portas, na ordem de passagem: ");
                scanf("%i %i", &p1, &p2);
                    if(p1 == 1 && p2 == 8){
                        printf("- Frutas Capturadas: Melao, banana");
                    }
                    else if(p1 == 2 && p2 == 9){
                        printf("- Frutas Capturadas: Melancia, tangerina");
                    }
                    else if(p1 == 3 && p2 == 7){
                        printf("- Frutas Capturadas: Uva, manga, limao");
                    }
                    else{
                        printf("- Trageto invalido!");
                    }
            }
            else if(portas == 3){
                printf("Digite o numero das 3 portas, na ordem de passagem: ");
                scanf("%i %i %i", &p1, &p2, &p3);
                if(p1 == 1 && p2 == 4 & p3 == 9){
                    printf("- Frutas Capturadas: Melao, melancia, tangerina ");
                }
                else if(p1 == 1 && p2 == 6 && p3 == 9){
                    printf("- Frutas Capturadas: Melao, banana, tangerina ");
                }
                else if(p1 == 2 && p2 == 4 && p3 == 8){
                    printf("- Frutas Capturadas: Melancia, melao, banana");
                }
                else if(p1 == 2 && p2 == 5 && p3 == 7){
                    printf("- Frutas Capturadas: Melancia, manga, limao");
                }
                else if(p1 == 3 && p2 == 5 && p3 == 9){
                    printf("- Frutas Capturadas: Uva, melancia, tangerina");
                }
                else{
                    printf("- Trageto invalido! ");
                }
            }
            else if(portas == 4){
                printf("Digite o numero das 4 portas, na ordem de passagem: ");
                scanf("%i %i %i %i", &p1, &p2, &p3, &p4);
                    if(p1 == 1 && p2 == 4 && p3 == 5 && p4 == 7){
                        printf("- Frutas Capturadas: Melao, melancia, manga, limao");
                    }
                    else if(p1 == 1 && p2 == 4 && p3 == 6 && p4 == 8){
                        printf("- Frutas Capturadas: Melao, melancia, tangerina, banana");
                    }
                    else if(p1 == 2 && p2 == 4 && p3 == 6 && p4 == 9){
                        printf("- Frutas Capturadas: Melancia, melao, banana, tangerina");
                    }
                    else if(p1 == 3 && p2 == 5 && p3 == 4 && p4 == 8){
                        printf("- Frutas Capturadas: Uva, melancia, melao, banana");
                    }
                    else if(p1 == 3 && p2 == 5 && p3 == 6 && p4 == 8){
                        printf("- Frutas Capturadas: Uva, melancia, tangerina, banana");
                    }
                    else{
                        printf("- Trageto invalido! ");
                    }
                    
                
            }
             else if(portas == 5){
                printf("Digite o numero das 5 portas, na ordem de passagem: ");
                scanf("%i %i %i %i %i", &p1, &p2, &p3, &p4, &p5);
                    if(p1 == 3 && p2 == 5 && p3 == 4 && p4 == 6 && p5 == 9){
                        printf("- Frutas Capturadas: Uva, melancia, melao, banana, tangerina");
                    }
                    else{
                        printf("- Trageto invalido! ");
                    }
            }
        }
        return 0;
    }