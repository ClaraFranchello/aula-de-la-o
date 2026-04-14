#include <stdio.h>

int main(){
  int a, b, c, d;
  float frequencia, media;
  printf("Digite sua frequencia: ");
  scanf("%f", &frequencia);

  if(frequencia >= 75){

    printf("Notas:");
    scanf("%i %i %i %i", &a, &b, &c, &d);
    
    media = (a + b + c + d)/4;
  

    if(media < 60){
      printf(" -  INAPTO por nota! (%.1f)", media);
    }

    else if(media >= 60){
      printf(" - APTO! (%.1f)", media);
    }
    
  }
  else if(frequencia < 75){
    printf("\n -  INAPTO por falta!");
  }

  return 0;
}
   