#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Érlon

int main() {
    // Definição das variáveis para cada atributo da cidade
    int codigo, populacao, pontos_turisticos;
    char nome[50];
    float area, pib;

    // Cadastro das Cartas:
    printf("Cadastro de Carta de Cidade\n");

    // Solicita ao usuário que insira as informações da cidade
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); 
    
    // Lê uma string com espaços
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em milhões de dólares): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões de dólares\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
