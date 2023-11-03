#include <stdio.h>

int main(){
  float nota [2] [3];
  float media [2] = {0,0};
  int cont1, cont2;

  for ( cont1 = 0; cont1 < 2; cont1++){
    for (cont2 = 0; cont2 < 3; cont2++){
      printf("Escreva a nota % do aluno %d:  ", cont1+1, cont2+1);
      scanf("%f", &nota [cont1] [cont2]);
      media[cont1] = media[cont1] + nota[cont1][cont2] / 3;
    }
    printf("A média do aluno %d é de %.2f\n\n", cont1+1, media[cont1]);
  }
  return 0;
}