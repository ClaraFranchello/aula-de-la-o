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
            system("cls");	
            printf ("🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
            printf ("\n🧱🧱🧱🧱🧱🧱  JOGO DA VELHA 🧱🧱🧱🧱🧱🧱");	
            printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
            printf ("\n");   
            printf ("\n               a 🧱b 🧱c ");      
            printf ("\n               🧱🧱🧱🧱🧱   ");            
            printf ("\n               d 🧱e 🧱f ");                
            printf ("\n               🧱🧱🧱🧱🧱   ");             
            printf ("\n               g 🧱h 🧱i ");              
            printf ("\n");
            printf("\n               ");
            if(a == 'x')printf ("🔴");
            else if(a == 'o')printf("⚪");
            else{ printf("  ");}
            printf("🧱");
            if(b == 'x')printf ("🔴");
            else if(b == 'o')printf("⚪");
            else{ printf("  ");}
            printf("🧱");
            if(c == 'x')printf ("🔴");
            else if(c == 'o')printf("⚪");
            else{ printf("  ");}
            printf ("\n               🧱🧱🧱🧱🧱");
            printf("\n               ");
            if(d == 'x')printf("🔴");
            else if(d == 'o')printf("⚪");
            else{ printf("  ");}
            printf("🧱");
            if(e == 'x')printf("🔴");
            else if(e == 'o')printf("⚪");
            else{ printf("  ");}
            printf("🧱");
            if(f == 'x')printf("🔴");
            else if(f == 'o')printf("⚪");
            else{ printf("  ");}
            printf ("\n               🧱🧱🧱🧱🧱");
            printf("\n               ");
            if(g == 'x')printf("🔴");
            else if(g == 'o')printf("⚪");
            else{ printf("  ");}
            printf("🧱");
            if(h == 'x')printf ("🔴");
            else if(h == 'o')printf("⚪");
            else{ printf("  ");}
            printf("🧱");
            if(i == 'x')printf ("🔴");
            else if(i == 'o')printf("⚪");
            else{ printf("  ");}
            printf ("\n\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
            printf ("\n Jogador 01-> [🔴]    Jogador 02-> [⚪]");
            printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
            if(jogador == 1){
                printf("\n Jogador 0%i [🔴]", jogador);
            }
            else{
                printf("\n Jogador 0%i [⚪]", jogador);
            }
            scanf(" %c", &jogada);
            if(fim == 0){
            switch(jogada){
                case 'a':
                    if(a == ' '){
                        if(jogador == 1){
                            a = 'x';
                        }
                        else{
                            a = 'o';
                        }
                        qj ++;
                    }
                    break;


                case 'b':
                    if(b == ' '){
                        if(jogador == 1){
                            b = 'x';
                        }
                        else{
                            b = 'o';
                        }
                        qj++;
                    }
                    break ;

                case 'c':
                    if(c == ' '){
                        if(jogador == 1){
                            c = 'x';
                        }
                        else{
                            c = 'o';
                        }
                        qj++;
                    }  
                    break;

                case 'd':
                    if(d == ' '){  
                        if(jogador == 1){
                            d = 'x';
                        }
                        else{
                            d = 'o';
                        }
                        qj++;
                    }
                    break;

                case 'e':
                    if(e == ' '){
                        if(jogador == 1){
                            e = 'x';
                        }
                        else{
                            e = 'o';
                        }
                        qj++;
                    }   
                    break;

                case 'f':
                    if(f == ' '){
                        if(jogador == 1){
                            f = 'x';
                        }
                        else{
                            f = 'o';
                        }
                        qj++;   
                    }
                    break;

                case 'g':
                    if(g == ' '){
                        if(jogador == 1){
                            g = 'x';
                        }
                        else{
                            g = 'o';
                        }
                        qj++;
                    }   
                    break;

                case 'h':
                    if(h == ' '){
                        if(jogador == 1){
                            h = 'x';
                        }
                        else{
                            h = 'o';
                        }  
                        qj++;
                    } 
                    break;

                case 'i':
                    if(i == ' '){
                        if(jogador == 1){
                            i = 'x';
                        }
                        else{
                            i = 'o';
                        }
                        qj++;
                    }   
                    break;   
                }
                if( (a == 'x' && b == 'x' && c == 'x') || 
                (a == 'x' && d == 'x' && g == 'x') ||
                (a == 'x' && e == 'x' && i == 'x') ||
                (b == 'x'&& e == 'x' && h == 'x' ) ||
                (c == 'x'&& f == 'x'&& i == 'x' )  ||
                (c == 'x'&& e == 'x' && g == 'x')  ||
                (d == 'x'&& e == 'x' && f == 'x')  ||
                (g == 'x' && h == 'x'&& i == 'x')  
            ) {
                printf("Jogador 1 ganha:");
                printf("\n               ");
                if(a == 'x')printf ("🔴");
                else if(a == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(b == 'x')printf ("🔴");
                else if(b == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(c == 'x')printf ("🔴");
                else if(c == 'o')printf("⚪");
                else{ printf("  ");}
                printf ("\n               🧱🧱🧱🧱🧱");
                printf("\n               ");
                if(d == 'x')printf("🔴");
                else if(d == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(e == 'x')printf("🔴");
                else if(e == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(f == 'x')printf("🔴");
                else if(f == 'o')printf("⚪");
                else{ printf("  ");}
                printf ("\n               🧱🧱🧱🧱🧱");
                printf("\n               ");
                if(g == 'x')printf("🔴");
                else if(g == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(h == 'x')printf ("🔴");
                else if(h == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(i == 'x')printf ("🔴");
                else if(i == 'o')printf("⚪");
                else{ printf("  ");}
                fim = 1;
            }
             if((a == 'o' && b == 'o' && c == 'o') ||
            (a == 'o' && d == 'o' && g == 'o') ||
            (a == 'o' && e == 'o' && i == 'o') ||
            (b == 'o'&& e == 'o' && h == 'o') ||
            (c == 'o'&& f == 'o'&& i == 'o' ) ||
            (c == 'o'&& e == 'o' && g == 'o') ||
            (d == 'o'&& e == 'o' && f == 'o') ||
            (g == 'o' && h == 'o'&& i == 'o') 
            ) {
                printf("Jogador 2 ganha: ");
                printf("\n               ");
                if(a == 'x')printf ("🔴");
                else if(a == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(b == 'x')printf ("🔴");
                else if(b == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(c == 'x')printf ("🔴");
                else if(c == 'o')printf("⚪");
                else{ printf("  ");}
                printf ("\n               🧱🧱🧱🧱🧱");
                printf("\n               ");
                if(d == 'x')printf("🔴");
                else if(d == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(e == 'x')printf("🔴");
                else if(e == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(f == 'x')printf("🔴");
                else if(f == 'o')printf("⚪");
                else{ printf("  ");}
                printf ("\n               🧱🧱🧱🧱🧱");
                printf("\n               ");
                if(g == 'x')printf("🔴");
                else if(g == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(h == 'x')printf ("🔴");
                else if(h == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(i == 'x')printf ("🔴");
                else if(i == 'o')printf("⚪");
                else{ printf("  ");}
                fim = 1;
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
                printf("\nempate!\n");
                printf("\n               ");
                if(a == 'x')printf ("🔴");
                else if(a == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(b == 'x')printf ("🔴");
                else if(b == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(c == 'x')printf ("🔴");
                else if(c == 'o')printf("⚪");
                else{ printf("  ");}
                printf ("\n               🧱🧱🧱🧱🧱");
                printf("\n               ");
                if(d == 'x')printf("🔴");
                else if(d == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(e == 'x')printf("🔴");
                else if(e == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(f == 'x')printf("🔴");
                else if(f == 'o')printf("⚪");
                else{ printf("  ");}
                printf ("\n               🧱🧱🧱🧱🧱");
                printf("\n               ");
                if(g == 'x')printf("🔴");
                else if(g == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(h == 'x')printf ("🔴");
                else if(h == 'o')printf("⚪");
                else{ printf("  ");}
                printf("🧱");
                if(i == 'x')printf ("🔴");
                else if(i == 'o')printf("⚪");
                else{ printf("  ");}
                printf("\n");
                fim = 1;
                }
                if(fim == 0)system("cls");
            }
        }while(fim == 0);
        printf("\nDeseja continuar? ");
        scanf(" %c", &resp);
    }while(resp == 's' || resp =='S');
    

	return 0;
    }