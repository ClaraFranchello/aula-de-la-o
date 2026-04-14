#include <stdio.h>

int main() {
    
    int n1, n2, a, i;

        printf("Digite dois numeros inteiros: ");
        scanf("%i %i", &n1, &n2);
        i = n1;
        a = n1;
        printf("Numeros pares: %i", i);
        for(int i = n1; i <= n2 && a <= n2; i++){
            if(i %2 == 0){
                printf("%i ", i);
            }
            if(a %2 == 1){
                printf("%i ", i);
            }
        }
        printf("\n  Numeros impares:%i ", i);
        

    return 0;
}