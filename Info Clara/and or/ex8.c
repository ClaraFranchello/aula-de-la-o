#include <stdio.h>

    int main(){

        int dia, mes;

        printf("Digite um dia e um mes: ");
        scanf("%i %i", &dia, &mes );

        if(dia < 1 || dia > 31 || dia > 28 && mes == 2){
            printf("dia invalido!");
        }
        else if (mes < 1 || mes > 12){
            printf("mes invalido!");
        }
        else{
            if(dia < 10 && mes == 1){
               printf("- Data: 0%i/jan", dia);  
            }        
            else if(dia >= 1 && dia <= 31 && mes == 1){
                printf("- Data: %i/jan", dia);
            }
            else if(dia < 10 && mes == 2){
               printf("- Data: 0%i/fev", dia);  
            }  
            else if(dia >= 1 && dia <= 28 && mes == 2){
                printf("-Data: %i/fev", dia);
            }
            else if(dia < 10 && mes == 3){
               printf("- Data: 0%i/mar", dia);  
            } 
            else if(dia >=1 && dia <= 31 && mes == 3){
                printf("-Data: %i/mar", dia);
            }
            else if(dia < 10 && mes == 4){
               printf("- Data: 0%i/abr", dia);  
            } 
             else if(dia >=1 && dia <= 30 && mes == 4){
                printf("-Data: %i/abr", dia);
            }
            else if(dia < 10 && mes == 5){
               printf("- Data: 0%i/mai", dia);  
            } 
            else if(dia >=1 && dia <= 31 && mes == 5){
                printf("-Data: %i/mai", dia);
            }
            else if(dia < 10 && mes == 6){
               printf("- Data: 0%i/jun", dia);  
            } 
            else if(dia >=1 && dia <= 30 && mes == 6){
                printf("-Data: %i/jun", dia);
            }
            else if(dia < 10 && mes == 7){
               printf("- Data: 0%i/jul", dia);  
            } 
            else if(dia >=1 && dia <= 31 && mes == 7){
                printf("-Data: %i/jul", dia);
            }
            else if(dia < 10 && mes == 8){
               printf("- Data: 0%i/ago", dia);  
            } 
            else if(dia >=1 && dia <= 31 && mes == 8){
                printf("-Data: %i/ago", dia);
            }
            else if(dia < 10 && mes == 9){
               printf("- Data: 0%i/set", dia);  
            } 
            else if(dia >=1 && dia <= 30 && mes == 9){
                printf("-Data: %i/set", dia);
            }
            else if(dia < 10 && mes == 10){
               printf("- Data: 0%i/out", dia);  
            } 
            else if(dia >=1 && dia <= 31 && mes == 10){
                printf("-Data: %i/out", dia);
            }
            else if(dia < 10 && mes == 11){
               printf("- Data: 0%i/nov", dia);  
            } 
            else if(dia >=1 && dia <= 30 && mes == 11){
                printf("-Data: %i/nov", dia);
            }
            else if(dia < 10 && mes == 12){
               printf("- Data: 0%i/dez", dia);  
            } 
            else if(dia >=1 && dia <= 31 && mes == 12){
                printf("-Data: %i/dez", dia);
            }
        }
        return 0;
    }