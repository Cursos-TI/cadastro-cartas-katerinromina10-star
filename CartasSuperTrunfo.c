#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  long int populacao1;
  float area1;
  float pib1;
  int pontos1;
  
  //Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  long int populacao2;
  float area2;
  float pib2;
  int pontos2;
  
  // Área para entrada de dados

  //Entrada carta 1
  printf("\nCARTA 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%ld", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Entrada carta 2
  printf("\nCARTA 2\n");
  
   printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%ld", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

    //Exibição carta 1
    printf("\nExibição carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontos1);

    //Exibição carta 2
    printf("\nExibição carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontos2);
  
    // Calcular a densidade 
  
float densidade1 = populacao1 / area1;
float densidade2 = populacao2 / area2;
  
printf("\nDensidade Populacional\n");
printf("Carta 1: %.2f hab/km²\n", densidade1);
printf("Carta 2: %.2f hab/km²\n", densidade2);
  
     // Calcular  PIB per Capita
  
float pibpercapita1 = pib1 / populacao1;
float pibpercapita2 = pib2 / populacao2;
  
printf("\nPIB Per Capita\n");
printf("Carta 1: %.2f PIB per Capita\n", pibpercapita1);
printf("Carta 2: %.2f PIB per Capita\n", pibpercapita2);
  
 //Calcular o Super Poder

  float inversodensidade1 = (1 / densidade1);
  float superpoder1 = (populacao1 + area1 + pib1 + pontos1 + +pibpercapita1 + inversodensidade1);
  float inversodensidade2 = (1 / densidade2);
  float superpoder2 = (populacao2 + area2 + pib2 + pontos2 +  +pibpercapita2 + inversodensidade2);

  printf("\nSuper Poder\n");
  printf("O super poder da carta 1 e de: %.2f \n", superpoder1);
  printf("O super poder da carta 2 e de: %.2f \n", superpoder2);

  //Comparação de Cartas

  printf("\nComparação de Cartas\n");
  long int comparacaopopulacao = populacao1 > populacao2;
  float comparacaoarea = area1 < area2;
  float comparacaopib = pib1> pib2;
  int comparacaopontos = pontos1 > pontos2;
  float comparacaopibpercarpita =  pibpercapita1 < pibpercapita2;
  float comparacaoinversodensidade = inversodensidade1 > inversodensidade2;

  //Exibir os Resultados das Comparações

  printf ("A Populacao da carta 1 venceu: %.1ld\n", comparacaopopulacao);
  printf ("A Area da carta 2 venceu: %.1f\n", comparacaoarea);
  printf ("O PIB da carta 1 venceu: %.1f\n", comparacaopib);
  printf ("Os Pontos turisticos da carta 1 venceram: %.1d\n", comparacaopontos);
  printf ("O PIB per capita da carta 2 venceu: %.1f\n", comparacaopibpercarpita);
  printf ("A densidade da carta 1 venceu: %.1f\n", comparacaoinversodensidade);
return 0;
} 
