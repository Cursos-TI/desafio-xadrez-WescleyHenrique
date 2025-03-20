#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    #define TORRE_MOVIMENTO 5
    #define BISPO_MOVIMENTO 5
    #define RAINHA_MOVIMENTO 8

    
int main() {

    // Implementação de Movimentação da torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("MOVIMENTAÇÃO DA TORRE:\n");

    for (int i = 1;i <= TORRE_MOVIMENTO; i++) 
    {
        printf("MOVENDO A TORRE EM LINHA RETA %d CASA(S)\n", i);
    }
    

    // Implementação de Movimentação do bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
