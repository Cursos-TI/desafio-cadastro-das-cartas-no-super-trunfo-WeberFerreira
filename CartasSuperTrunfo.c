#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    
    char nomedacidade[200];
    char codigo[3];    
    int populacao;
    float area;
    float PIB;
    int Pontosturisticos;

    printf("Digite nome da cidade:");
    scanf(" %s\n", nomedacidade);

    printf("Digite codigo da carta:");
    scanf(" %s\n", codigo);

    printf("Digite população:");
    scanf(" %d\n", &populacao);

    printf("Digite área:");
    scanf(" %f\n", &area);

    printf("Digite o produto interno bruto (PIB):");
    scanf(" %f\n", &PIB);

    printf("Digite quantidade de pontos turisticos:");
    scanf(" %d\n", &Pontosturisticos);

    printf("Cidade: %s\n", nomedacidade);
    printf("Codigo da carta: %s\n", codigo);
    printf("População: %d\n", &populacao);
    printf("Area: %f\n", &area);
    print("Produto interno bruto: %f\n", &PIB);
    printf("Pontos turisticos: %d\n", &Pontosturisticos);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
