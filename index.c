/* enunciado:

Crie um programa em C que:
• Declare um vetor de tamanho 5 para armazenar números inteiros.
• Solicite ao usuário que insira 5 valores inteiros e armazene esses valores no vetor.
• Calcule a soma de todos os valores do vetor.
• Exiba todos os elementos do vetor, um por linha, e depois exiba a soma total dos valores.

Cenário: Imagine que você está desenvolvendo um sistema que armazena e analisa dados de
vendas diárias de uma pequena loja. O programa permite que o usuário insira a quantidade de
vendas realizadas em 5 dias. Após armazenar os valores, o sistema calculará a soma total do
número de vendas, exibirá a quantidade vendida em cada dia, além da quantidade geral de vendas
no período.

*/

#include <stdio.h>

int main() {
    int vendas_por_dia[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a quantidade de vendas do dia %d: ", i + 1);            
        scanf("%d", &vendas_por_dia[i]);
        soma += vendas_por_dia[i];
    }

    printf("\nQuantidade de vendas por dia:\n");

    for (int i = 0; i < 5; i++) {
        printf("Dia %d: %d\n", i + 1, vendas_por_dia[i]);
    }

    printf("\nQuantidade total de vendas: %d\n", soma);

    
}