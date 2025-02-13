#include <stdio.h>
#include <ctype.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    int CodCarta;
    char NomeCidade[50];
    float area;
    int Populacao;
    float pib;
    int PontoTuristicos;

    printf("Digite a Sigla da Cidade: ");
    scanf("%c", &estado);
    estado = toupper(estado);

    printf("Digite o Código da Carta: ");
    scanf("%d", &CodCarta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", NomeCidade);

    printf("Digite o valor da Área da cidade: ");
    scanf("%f", &area);

    printf("Digite o valor populacional da Cidade: ");
    scanf("%d", &Populacao);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &PontoTuristicos);


    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %c0%d\n", estado,CodCarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf( "População: %d\n", Populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Número de Pontos Turísticos: %d\n", PontoTuristicos);



    return 0;
}