#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    #define TORRE_MOVIMENTO 5
    #define BISPO_MOVIMENTO 5
    #define RAINHA_MOVIMENTO 8
    #define CAVALO_MOVIMENTO 1

    //MOVIMENTAÇÃO DA TORRE
    void moverTorre(int casas){
        if (casas > 0)
    {
        printf("MOVENDO A TORRE EM LINHA RETA 1 CASA A DIREITA\n");
        moverTorre(casas - 1);
    }
}

    //MOVIMENTAÇÃO DO BISPO
    void moverBispo(int casas){
    for (int vertical = 0; vertical < 5; vertical++) {
        printf("MOVENDO O BISPO 1 CASA PARA CIMA\t");
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("MOVENDO O BISPO 1 CASA PARA DIREITA\n");
        }
    }
}


    //MOVIMENTAÇÃO DA RAINHA
    void moverRainha(int casas){
        if (casas > 0)
        {
            printf("MOVENDO A RAINHA 1 CASA PARA ESQUERDA\n");
            moverRainha(casas - 1);
    
        }

    //MOVIMENTAÇÃO DO CAVALO

    
int main() {

    // Implementação de Movimentação da torre usando for
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\nMOVIMENTAÇÃO DA TORRE\n");
    moverTorre(TORRE_MOVIMENTO);
    

    // Implementação de Movimentação do bispo usando while
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.   
    printf("\nMOVIMENTAÇÃO DO BISPO\n");
    moverBispo(BISPO_MOVIMENTO);
    // Implementação de Movimentação da Rainha usando do-while
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMOVIMENTAÇÃO DA RAINHA\n");
    moverRainha(RAINHA_MOVIMENTO);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMOVIMENTAÇÃO DO CAVALO (usando for):\n");

for ( int i = 1; i <= CAVALO_MOVIMENTO; i++) //loop externo
{
  for (int j = 1; j <= 1; j++) //loop interno
  {
    printf("MOVENDO O CAVALO PARA BAIXO %d CASA(S)\n", 2);

    printf("MOVENDO O CAVALO PARA ESQUERDA %d CASA(S)\n", 1);
  }
  }
  
 // Movimentação do Cavalo usando while
 printf("\nMOVIMENTAÇÃO DO CAVALO (usando while):\n");
 int k = 1; // Usando uma nova variável para o loop externo
 while (k <= CAVALO_MOVIMENTO) {
     int j = 1; // Inicializa o contador para o loop interno
     while (j <= 1) {
         printf("MOVENDO O CAVALO PARA BAIXO 2 CASA(S)\n");
         printf("MOVENDO O CAVALO PARA ESQUERDA 1 CASA(S)\n");
         j++; // Incrementa o contador do loop interno
     }
     k++; // Incrementa o contador do loop externo
 }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
