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
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  
  //Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // Área para entrada de dados

  //Entrada carta 1

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Entrada carta 2

   printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

return 0;
} 
