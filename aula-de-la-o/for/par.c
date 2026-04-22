#include <stdio.h>

int main() {
    
    int n1, n2, fim, aux;

        printf("Digite dois numeros inteiros: ");
        scanf("%i %i", &n1, &n2);

        if(n2 < n1){
            aux = n1;
            n1 = n2;
            n2 = aux;
        }
        printf("Numeros pares: ");
        fim = 0;
        for(int i = n1; i <= n2; i++){
            if(i %2 == 0 && fim == 0){
                printf("%i ", i);
            }
            if(i == n2 && fim == 0){
                fim = 1;
                i = n1;
                printf("\nNumeros impares: ");
            }
            if(i %2 == 1 && fim == 1){
                printf("%i ", i);
            }
        }
        
    return 0;
}