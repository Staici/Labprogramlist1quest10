#include <stdio.h>

int main(void) {
  int VOLUME;
  int COMPRIMENTO;
  int LARGURA;
  int ALTURA;
  printf("Digite o comprimento da caixa retangular: ");
  scanf("%d",&COMPRIMENTO);
  printf("DIgite a largura da caixa retangular: ");
  scanf("%d",&LARGURA);
  printf("Digite a altura: ");
  scanf("%d",&ALTURA);
  
VOLUME =COMPRIMENTO*LARGURA*ALTURA;
  printf("O volume da caixa retangular é: %d",VOLUME);
  return 0;
}