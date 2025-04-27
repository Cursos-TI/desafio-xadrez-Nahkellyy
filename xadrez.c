#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 5;
    int rainha = 8;
    int bispo = 5;

     for (int i = 0; i <= 4; i++)// Implementação de Movimentação do Bispo
    {
        printf("Bispo:cima, direita\n");
    }                   

    // Implementação de Movimentação da Torre.
     while (torre > 0 )
    {
        printf("Torre: direita\n");
        torre--;
    }
    
    //movimento da rainha
    while (rainha > 0 )
    {
        printf("Rainha: esquerda\n");
        rainha--;
    }


    return 0;
}
