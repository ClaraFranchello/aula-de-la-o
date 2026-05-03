#include <stdio.h>

int main(){

    int forca = 6, aux = 0;
    char l1 = '?', l2 = '?', l3 = '?', l4= '?', l5 = '?', l6 = '?', resp, aux1 = 0, aux2 = 0, aux3 = 0;

    if(aux == 0){
    printf("============================================\n");
    printf("====    JOGO DA FORCA     ==================\n");
    printf("============================================\n");
    printf("== 1 - dica: E uma fruta    ================\n");
    printf("== 2 - dica: No brasil tem muito ===========\n");
    printf("== 3 - dica: Evita caimbra  ================\n");
    printf("============================================\n");
    printf("== Palavra: ");
    printf("%c ", l1);
    printf("%c ", l2);
    printf("%c ", l3);
    printf("%c ", l4);
    printf("%c ", l5);
    printf("%c ", l6);
    printf("           ==========\n");
    printf("============================================\n ->");
    aux = 1; // calma ai
    }
    for(int i = 1; i <= forca;){
        scanf("%c", &resp);
        if(resp == 'b' && aux1 == 0 ){
            l1 = 'b';
            i = i + 1;
            aux1 = 1;
        }
        if(resp == 'a' && aux2 == 0){
            l2 = 'a';
            i = i + 1;
            l4 = 'a';
            i = i + 1;
            l6 = 'a';
            i = i + 1;
            aux2 = 1;
        }
        if(resp == 'n' && aux3 == 0){
            l3 = 'n';
            i = i + 1;
            l5 = 'n';
            i = i + 1;
            aux3 = 1;
        }
        printf("============================================\n");
        printf("====    JOGO DA FORCA     ==================\n");
        printf("============================================\n");
        printf("== 1 - dica: E uma fruta    ================\n");
        printf("== 2 - dica: No brasil tem muito ===========\n");
        printf("== 3 - dica: Evita caimbra  ================\n");
        printf("============================================\n");
        printf("== Palavra: ");
        printf("%c ", l1);
        printf("%c ", l2);
        printf("%c ", l3);
        printf("%c ", l4);
        printf("%c ", l5);
        printf("%c ", l6);
        printf("           ==========\n");
        printf("============================================\n ->");
        if(aux1 == 1 && aux2 == 1 && aux3 == 1){
            printf("\n Voce acertou a palavra, Parabens!");
        }
        
        }
        return 0;
    }

