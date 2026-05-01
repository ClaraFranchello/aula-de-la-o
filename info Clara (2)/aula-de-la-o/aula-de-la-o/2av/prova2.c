#include <stdio.h>
#include <unistd.h>
int main(){
    int min, seg, fim = 0;

    printf("Tempo inicial: ");
    scanf("%i %i",&min, &seg);

        printf("%i:%i\n", min, seg);
        for(;min >=0 && seg >= 0; seg-= 1){
            if(seg == 0){
                seg = 59;
                min -=1;
            }
            if(seg == 0 && min == 0){
                printf("00:00");
            }

            printf("%i:%i\n", min, seg);
            fflush(stdout);
            usleep(10000);
            
        }
    
    
    return 0;
}