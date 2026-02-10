#include <stdio.h>

int main() {
       int opcao;

   printf("movimentacao das pecas de xadrez\n");
   printf("1 -Rei\n");
   printf("2 -Rainha\n");
   printf("3 -Torre\n");
   printf("4 -Bispo\n");
   printf("5 -Cavalo\n");
   printf("6 -peao\n");
   printf("Escolha uma peca: ");
   scanf("%d", &opcao);
switch(opcao) {
case 1:
   printf("Rei: move-se uma casa em qualquer direcao.\n");
   break;
case 2:
   printf("Rainha: move-se em qualquer direcao.\n");
   break;
case 3:
   printf("Torre: move-se na horizontalnou vertical.\n");
   break;
case 4:
   printf("Bispo: movi-se na diagonal.\n");
   break;
case 5:
   printf("Cavalo: move-se em L.\n");
   break;
case 6:
   printf("peao: move-se para frente , uma casa por vez.\n");
   break;
default:
  printf("opcao invalida.\n");

  }
return 0;
}
