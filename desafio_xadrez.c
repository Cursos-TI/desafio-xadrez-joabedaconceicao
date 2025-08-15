#include <stdio.h>

int main()
{
    // Mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
      {
     printf("Direita\n"); // Imprime a direção do movimento
      }

    // Mover o bispo 5 casas na diagonal para cima á direita

    int i = 0;

    while (i < 5)
    {

       printf("Para cima á direita\n");

       i++;
   }

    // Mover a rainha 8 casas á esquerda
    int i = 0;

     do
    {
      printf("Esquerda %d\n", i + 1);
      i++;
     } while (i < 8);

     // Controlar o movimento do cavalo em L,duas casas pra cima e uma casa á direita
      int movimentoCompleto;
      
     while (movimentoCompleto--)
     {
     for (int i = 0; i < 2; i++ ) {
        printf("Cima\n"); // Imprimir "Cima" duas vezes
     }
      printf("Direita\n"); // Imprimir "Direita" uma vez
     }
     

    return 0;
}