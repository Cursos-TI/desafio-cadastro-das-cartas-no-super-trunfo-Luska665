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

    // Primeira carta
    char estado, NomeCidade[20], CodCarta[5];
    int Populacao, PontoTuristicos;
    float area, pib, densidadeP, pibP, SuperPoder;
    
    // Segunda Carta
    char estado_2, NomeCidade_2[20], Cod2Carta[5];
    int Populacao_2, PontoTuristicos_2;
    float area_2, pib_2, densidadeP_2, pibP_2, SuperPoder_2;

    // CADASTRO DA PRIMEIRA CARTA
    printf("_________CARTA 1________");
    printf(" \n");

    printf("Digite a Sigla da Cidade (apenas de A-H): ");
    scanf("%c", &estado);
    estado = toupper(estado);

    printf("Digite um código da Carta (apenas de 1-4): ");
    scanf("%s", &CodCarta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &NomeCidade);

    printf("Digite o valor da Área da cidade: ");
    scanf("%f", &area);

    printf("Digite o valor populacional da Cidade: ");
    scanf("%d", &Populacao);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &PontoTuristicos);
    printf("  \n");

    // CALCULO DA DENSIDADE, PIB E SUPER PODER - PRIMEIRA CARTA

    densidadeP = (float)Populacao / area;
    pibP = (float) (pib * 1000000000) / Populacao;

    SuperPoder = Populacao + area + pib + PontoTuristicos + pibP + ( 1 / densidadeP);

     // CADASTRO DA SEGUNDA CARTA

     printf("_________CARTA 2________\n");
     printf(" \n");

     printf("Digite a Sigla da Cidade (apenas de A-H): ");
     scanf(" %c", &estado_2);
     estado_2 = toupper(estado_2);
 
     printf("Digite o Código da Carta (apenas de 1-4): ");
     scanf("%s", &Cod2Carta);
 
     printf("Digite o nome da Cidade: ");
     scanf("%s", &NomeCidade_2);
 
     printf("Digite o valor da Área da cidade: ");
     scanf("%f", &area_2);
 
     printf("Digite o valor populacional da Cidade: ");
     scanf("%d", &Populacao_2);
 
     printf("Digite o PIB da cidade: ");
     scanf("%f", &pib_2);
 
     printf("Digite quantos pontos turisticos tem na cidade: ");
     scanf("%d", &PontoTuristicos_2);

    // CALCULO DA DENSIDADE, PIB E SUPER PODER - SEGUNDA CARTA

    densidadeP_2 = (float)Populacao_2 / area_2;
    pibP_2 = (float) (pib_2 * 1000000000) / Populacao_2;

    SuperPoder_2 = Populacao_2 + area_2 + pib_2 + PontoTuristicos_2 + pibP_2 + ( 1 / densidadeP_2);

    // CALCULO DE RESULTADO
       
    printf("Comparação de Cartas\n");
    printf( "População: %d\n", Populacao > Populacao_2);
    printf("Área: %d\n", (int) area > area_2);
    printf("PIB: %d\n", (int) pib > pib_2);
    printf("Número de Pontos Turísticos: %d\n", PontoTuristicos > PontoTuristicos_2);
    printf("Densidade Populacional: %d\n", (int) densidadeP > densidadeP_2);
    printf("PIB per Capita: %d\n", (int) pibP > pibP_2);
    printf("Poder da Carta: %d\n", (int) SuperPoder > SuperPoder_2);
   


    return 0;
}