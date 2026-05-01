#include <stdio.h>

int main(){

    int n1, n2, result, x;
    printf("Digite dois valores: ");
    scanf("%i %i", &n1, &n2);
    
    

    printf("%i = %i", n1, n1);
    for(int i = n1 + 1 ; i <= n2; i++){
        result = n1 + i;
        printf("\n%i + %i = %i", n1, i, result);
        n1 = result;
        result = n1 + i;
    }
}