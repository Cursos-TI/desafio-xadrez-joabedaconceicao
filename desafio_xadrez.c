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
    int j = 0;

     do
    {
      printf("Esquerda %d\n", j + 1);
      j++;
     } while (j < 8);

     // Controlar o movimento do cavalo em L,duas casas pra cima e uma casa á direita
      
      
     
     
     for (int i = 0; i < 2; i++) {
        printf("Cavalo move para Baixo\n"); // Imprimir "Baixo" duas vezes
     
     
      
     }
     
     for (int j = 0; j < 1; j++){
      printf("Cavalo move para Esquerda\n"); // Imprimir "Esquerda" uma vez
     } j++;

    return 0;
}