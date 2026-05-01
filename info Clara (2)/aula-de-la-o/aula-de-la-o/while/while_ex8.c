#include <stdio.h>

int main() {

    int val1, val2, menor, maior, i, x;

    printf("Digite dois valores: ");
    scanf("%i %i", &val1, &val2);

   
   if(val1 < val2){
    menor = val1;
    maior = val2;
   }
   else if(val1 > val2){
    menor = val2;
    maior = val1;
   }
   
   i = menor;
   while(i <= maior){
        if(i % 7 == 0){
            x = i;
        }
        i++;
   }
   if( x != -1){
    printf("Maior = %i ", x);
   }
   else{
    printf("Nenhum numero divisivel por 7! ");
   }

    return 0;
}