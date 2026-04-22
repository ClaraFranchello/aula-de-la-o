#include <stdio.h>
#include <stdlib.h>

int main() {

    int fim, jogador, qj, qja;
    char a, b, c, d, e, f, g, h, i, jogada, resp;
    
    do{
        a = b = c = d = e = f = g = h = i = ' ';
        fim = 0;
        jogador = 1;
        qj = 0;
        qja = 0;
        do{
            printf("======================== ");//cls
            printf("\n===== JOGO DA VELHA =====");
            printf("\n========================" );
            printf("\n\n\n            a | b | c");
            printf("\n            ---------");
            printf("\n            d | e | f");
            printf("\n            ---------");
            printf("\n            g | h | i");
            printf("\n");
            printf("\n             %c | %c  | %c ", a, b, c);
            printf("\n           -------------");
            printf("\n             %c | %c  | %c ", d, e, f);
            printf("\n           -------------");
            printf("\n             %c | %c  | %c  ", g, h, i);
            printf("\n======================");
            if(jogador == 1){
                printf("\n Jogador 0%i [X]", jogador);
            }
            else{
                printf("\n Jogador 0%i [O]", jogador);
            }
            scanf(" %c", &jogada);

            switch(jogada){
                case 'a':
                    if(a == ' '){
                        if(jogador == 1){
                            a = 'X';
                        }
                        else{
                            a = 'O';
                        }
                        qj ++;
                    }
                    break;


                case 'b':
                    if(b == ' '){
                        if(jogador == 1){
                            b = 'X';
                        }
                        else{
                            b = 'O';
                        }
                        qj++;
                    }
                    break ;

                case 'c':
                    if(c == ' '){
                        if(jogador == 1){
                            c = 'X';
                        }
                        else{
                            c = 'O';
                        }
                        qj++;
                    }  
                    break;

                case 'd':
                    if(d == ' '){  
                        if(jogador == 1){
                            d = 'X';
                        }
                        else{
                            d = 'O';
                        }
                        qj++;
                    }
                    break;

                case 'e':
                    if(e == ' '){
                        if(jogador == 1){
                            e = 'X';
                        }
                        else{
                            e = 'O';
                        }
                        qj++;
                    }   
                    break;

                case 'f':
                    if(f == ' '){
                        if(jogador == 1){
                            f = 'X';
                        }
                        else{
                            f = 'O';
                        }
                        qj++;   
                    }
                    break;

                case 'g':
                    if(g == ' '){
                        if(jogador == 1){
                            g = 'X';
                        }
                        else{
                            g = 'O';
                        }
                        qj++;
                    }   
                    break;

                case 'h':
                    if(h == ' '){
                        if(jogador == 1){
                            h = 'X';
                        }
                        else{
                            h = 'O';
                        }  
                        qj++;
                    } 
                    break;

                case 'i':
                    if(i == ' '){
                        if(jogador == 1){
                            i = 'X';
                        }
                        else{
                            i = 'O';
                        }
                        qj++;
                    }   
                    break;   
                }
                if(jogador == 1){
                    if( (a == 'X' && b == 'X' && c == 'X') || 
                        (a == 'X' && d == 'X' && g == 'X') ||
                        (a == 'X' && e == 'X' && i == 'X') ||
                        (b == 'X'&& e == 'X' && h == 'X' ) ||
                        (c == 'X'&& f == 'X'&& i == 'X' )  ||
                        (c == 'X'&& e == 'X' && g == 'X')  ||
                        (d == 'X'&& e == 'X' && f == 'X')  ||
                        (g == 'X' && h == 'X'&& i == 'X')  
<<<<<<<< HEAD:Info Clara/jogo_da_velha/jogodavelha.c
                    ) {
                        printf("\n   %c|%c|%c", a, b, c);
                        printf("\n   -----");
                        printf("\n   %c|%c|%c", d, e, f);
                        printf("\n   -----");
                        printf("\n   %c|%c|%c", g, h, i);
                        printf("\n==================\n");
                        printf("Jogador 1 ganha:");
                        fim = 1;
                    }
========
            ) {
                printf("\n   %c|%c|%c", a, b, c);
                printf("\n   -----");
                printf("\n   %c|%c|%c", d, e, f);
                printf("\n   -----");
                printf("\n   %c|%c|%c", g, h, i);
                printf("\n==================\n");
                printf("Jogador 1 ganha:");
                fim = 1;
            }
>>>>>>>> 61d0acb3a35da1b82aba25e9301a3d3542db5f06:jogodavelha.c
            }else{
                if((a == 'O' && b == 'O' && c == 'O') ||
                    (a == 'O' && d == 'O' && g == 'O')||
                    (a == 'O' && e == 'O' && i == 'O')||
                    (b == 'O'&& e == 'O' && h == 'O') ||
                    (c == 'O'&& f == 'O'&& i == 'O' ) ||
                    (c == 'O'&& e == 'O' && g == 'O') ||
                    (d == 'O'&& e == 'O' && f == 'O') ||
                    (g == 'O' && h == 'O'&& i == 'O') 
                ) {
                    printf("\n   %c|%c|%c", a, b, c);
                    printf("\n   -----");
                    printf("\n   %c|%c|%c", d, e, f);
                    printf("\n   -----");
                    printf("\n   %c|%c|%c", g, h, i);
                    printf("\n==================\n");
                    printf("Jogador 2 ganha:");
                    fim = 1;
                }
            }
                
                
                    if(qj > qja){        
                        if(jogador == 1){
                            jogador = 2;
                        }
                        else{
                            jogador = 1;
                        }
                        qja = qj;
                    }
                    if (qj == 9){
                        printf("\n             %c | %c  | %c ", a, b, c);
                        printf("\n           -------------");
                        printf("\n             %c | %c  | %c ", d, e, f);
                        printf("\n           -------------");
                        printf("\n             %c | %c  | %c  ", g, h, i);
                        printf("\n======================");
                        printf("\nempate!");
                        printf("\n");
                        fim = 1;
        
                    }

            if(fim == 0)system("cls");

        }while(fim == 0);
        printf("\nDeseja continuar? ");
        scanf(" %c", &resp);
    }while(resp == 's' || resp =='S');
    

	return 0;
    }