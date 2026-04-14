#include <stdio.h>

    int main(){

        float a, b, c;

        printf("Digite os tres tempos: ");
        scanf("%f %f %f", &a, &b, &c);

            if(a < b && b < c){
                printf("\n- 1 lugar: %.2f \n- 2 lugar: %.2f \n - 3 lugar: %.2f ", a, b, c);
            }
            else if(a < c && c < b){
                printf("\n- 1 lugar: %.2f \n - 2 lugar: %.2f \n - 3 lugar: %.2f ", a, c, b);
            }
            else if(b < a && a < c){
                printf("\n - 1 lugar: %.2f \n - 2 lugar: %.2f \n - 3 lugar: %.2f ", b, a, c);
            }
            else if(b < c && c < a){
                printf("\n - 1 lugar: %.2f \n - 2 lugar: %.2f \n - 3 lugar: %.2f ", b, c, a);
            }
             else if(c < a && a <b){
                printf("\n - 1 lugar: %.2f \n - 2 lugar: %.2f \n - 3 lugar: %.2f ", c, a, b);
            }
            else{
                printf("\n - 1º lugar: %.2f \n - 2 lugar: %.2f \n - 3 lugar: %.2f ", c, b, a);
            }
    }