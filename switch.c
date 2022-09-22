#include  <stdlib.h>
#include <stdio.h>

int main(){

  char ch;
  printf("Digite um simbolo de pontuacao(. , : ;): ");
  scanf("%c", &ch);
  printf("\n");
  switch(ch){
    case '.': printf("Este simbolo e um ponto."); break;
    case ',': printf("Este simbolo e uma virgula."); break;
    case ':': printf("Este simbolo sao dois pontos."); break;
    case ';': printf("Este simbolo e um ponto e virgula."); break;
    default : printf("Nao e uma pontuacao");
  }
  printf("\n");
return 0;
}
