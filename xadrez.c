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
    for (int vertical = 0; vertical < casas; vertical++) {
        printf("MOVENDO O BISPO 1 CASA PARA CIMA ==>\t");
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
    }

int main(){

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

    printf("\nMOVIMENTAÇÃO DO CAVALO:\n");

// Loop para simular o movimento do cavalo
for (int i = 0; i < 2; i++) { // Loop para 2 casas para cima
    for (int j = 0; j < 1; j++) { // Loop interno para simular a movimentação
        printf("MOVENDO O CAVALO PARA CIMA %d CASA(S)\n", 1);
        if (i == 1 && j == 0) {
            break; // Para sair do loop após a segunda casa
        }
    }
}

// Movimento para a direita
for (int k = 0; k < 1; k++) { // Loop para 1 casa para a direita
    printf("MOVENDO O CAVALO PARA DIREITA %d CASA(S)\n", 1);
}
  // Incrementa o contador do loop externo
 
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
