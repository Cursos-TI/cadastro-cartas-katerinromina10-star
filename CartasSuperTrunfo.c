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
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos1;
  
  //Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  unsigned long int populacao2;
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontos1);

    //Exibição carta 2
    printf("\nExibição carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
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
  float superpoder1 = (populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + inversodensidade1);
  float inversodensidade2 = (1 / densidade2);
  float superpoder2 = (populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + inversodensidade2);

  printf("\nSuper Poder\n");
  printf("O super poder da carta 1 e de: %.2f \n", superpoder1);
  printf("O super poder da carta 2 e de: %.2f \n", superpoder2);

  //Comparação de Cartas

  printf("\nComparação\n");
  long int comparacaopopulacao = populacao1 > populacao2;
  float comparacaoarea = area1 > area2;
  float comparacaopib = pib1> pib2;
  int comparacaopontos = pontos1 > pontos2;
  float comparacaopibpercarpita =  pibpercapita1 > pibpercapita2;
  float comparacaoinversodensidade = inversodensidade1 < inversodensidade2;

  //Exibir os Resultados das Comparações

  printf ("A População da carta 1 venceu %lu\n", comparacaopopulacao);
  printf ("A Área da Carta 1 venceu %f\n", comparacaoarea);
  printf ("O PIB da Carta 1 venceu %f\n", comparacaopib);
  printf ("Os Pontos turisticos da carta 1 vencerom: %d\n", comparacaopontos);
  printf ("O PIB per capita da carta 1 venceu: %f\n", comparacaopibpercarpita);
  printf ("A densidade da carta 2 venceu: %f\n", comparacaoinversodensidade);

  // Comparação de cartas (Atributo: População):

  printf("\nComparação de cartas (Atributo: População)\n");
  printf("Carta 1:%lu\n", populacao1);
  printf("Carta 2:%lu\n", populacao2);
  if (populacao1 > populacao2) {
    printf("A Populaçao da carta 1 venceu!\n");
    } else {
      printf("A Populaçao da carta 2 venceu!\n");
    }
  
  // Comparação de cartas (Atributo: Area):

  printf("\nComparação de cartas (Atributo: Area)\n");
  printf("Carta 1:%f\n", area1);
  printf("Carta 2:%f\n", area2);
  if (area1 > area2) {
    printf("A Area da carta 1 venceu!\n");
    } else {
      printf("A Area da carta 2 venceu!\n");
    }
  
   // Comparação de cartas (Atributo: PIB):

  printf("\nComparação de cartas (Atributo: PIB)\n");
  printf("Carta 1:%f\n", pib1);
  printf("Carta 2:%f\n", pib2);
  if (pib1 > pib2) {
    printf("O PIB da carta 1 venceu!\n");
    } else {
      printf("A PIB da carta 2 venceu!\n");
    }

  // Comparação de cartas (Atributo: PIB):

  printf("\nComparação de cartas (Atributo: Pontos Turisticos)\n");
  printf("Carta 1:%d\n", pontos1);
  printf("Carta 2:%d\n", pontos2);
  if (pontos1 > pontos2) {
    printf("Os Pontos Turisticos da carta 1 venceu!\n");
    } else {
      printf("Os Pontos Turisticos da carta 2 venceu!\n");
    }

  // Comparação de cartas (Atributo: PIB per capita):

  printf("\nComparação de cartas (Atributo: Pib per capita)\n");
  printf("Carta 1:%f\n", pibpercapita1);
  printf("Carta 2:%f\n", pibpercapita2);
  if (pibpercapita1 > pibpercapita2) {
    printf("O PIB per capita da carta 1 venceu!\n");
    } else {
      printf("O PIB per capita da carta 2 venceu!\n");
    }

   // Comparação de cartas (Atributo: Densidade Populacional):

  printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
  printf("Carta 1:%f\n", densidade1);
  printf("Carta 2:%f\n", densidade2);
  if (densidade1 < densidade2) {
    printf("A densidade da carta 1 venceu!\n");
    } else {
      printf("A densidade da carta 2 venceu!\n");
    }
  
  // Menu Interativo

  int escolha;

  printf("\nMenu\n");
  printf("Vamos comparar um atributo!:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. PIB per Capita\n");
  printf("6. Densidade Demográfica\n");
  printf("Escolha: ");
  scanf("%d", &escolha);

  printf("\nResultado\n");
  printf("Carta 1: %s\n", cidade1);
  printf("Carta 2: %s\n", cidade2);

  float valor1 = 0, valor2 = 0;
  char atributo[30];

switch (escolha) {

  case 1:
  valor1 = populacao1;
  valor2 = populacao2;
  sprintf(atributo, "População");
  break;

  case 2:
  valor1 = area1;
  valor2 = area2;
  sprintf(atributo, "Área");
  break;

  case 3:
  valor1 = pib1;
  valor2 = pib2;
  sprintf(atributo, "PIB");
  break;

  case 4:
  valor1 = pontos1;
  valor2 = pontos2;
  sprintf(atributo, "Pontos Turísticos");
  break;

  case 5:
  valor1 = pibpercapita1;
  valor2 = pibpercapita2;
  sprintf(atributo, "PIB per Capita");
  break;

  case 6:
  valor1 = densidade1;
  valor2 = densidade2;
  sprintf(atributo, "Densidade");
  break;

  default:
  printf("\nOpção inválida!\n");
    
return 0;
    }

    // Mostrar valores
  
    printf("Atributo selecionado: %s\n", atributo);
    printf("Carta 1 (%s): %.2f\n", cidade1, valor1);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor2);

    if (escolha == 6) {
        if (valor1 < valor2)
            printf("Vencedora: Carta 1 (%s) — menor densidade!\n", cidade1);
        else if (valor2 < valor1)
            printf("Vencedora: Carta 2 (%s) — menor densidade!\n", cidade2);
        else
            printf("Empate!\n");

    } else {
        if (valor1 > valor2)
            printf("Vencedora: Carta 1 (%s)!\n", cidade1);
        else if (valor2 > valor1)
            printf("Vencedora: Carta 2 (%s)!\n", cidade2);
        else
            printf("Empate!\n");
    }

// Menu 2 atributos

int escolha1, escolha2;
float valorA1, valorA2;
float valorB1, valorB2;
float soma1, soma2;

printf("\nAgora vamos comparar dois atributos!\n");
// Primeiro atributo
  
printf("\nEscolha o primeiro atributo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. PIB per Capita\n");
printf("6. Densidade \n");
printf("Escolha: ");
scanf("%d", &escolha1);
  
switch (escolha1) {
    case 1: valorA1 = populacao1; valorA2 = populacao2;
      break;
    case 2: valorA1 = area1; valorA2 = area2;
      break;
    case 3: valorA1 = pib1; valorA2 = pib2;
      break;
    case 4: valorA1 = pontos1; valorA2 = pontos2;
      break;
    case 5: valorA1 = pibpercapita1; valorA2 = pibpercapita2;
      break;
    case 6: valorA1 = densidade1; valorA2 = densidade2;
      break;
    default:
        printf("Opção inválida!\n");
        return 0;
}

// Segundo atributo
printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. PIB per Capita\n");
printf("6. Densidade\n");
printf("Escolha: ");
scanf("%d", &escolha2);
if (escolha1 == escolha2) {
    printf("\nNão repetir o mesmo atributo!\n");
    return 0;
}

switch (escolha2) {
    case 1: valorB1 = populacao1; valorB2 = populacao2; break;
    case 2: valorB1 = area1; valorB2 = area2; break;
    case 3: valorB1 = pib1; valorB2 = pib2; break;
    case 4: valorB1 = pontos1; valorB2 = pontos2; break;
    case 5: valorB1 = pibpercapita1; valorB2 = pibpercapita2; break;
    case 6: valorB1 = densidade1; valorB2 = densidade2; break;
    default:
        printf("Opção inválida!\n");
        return 0;
}

// Soma
  
soma1 = valorA1 + valorB1;
soma2 = valorA2 + valorB2;

printf("\nResultados da comparação Somando!\n");

printf("\nSoma dos atributos de (%s): %.2f\n", cidade1, soma1);
printf("Soma dos atributos de (%s): %.2f\n", cidade2, soma2);

if (soma1 > soma2)
    printf("\n A carta 1 venceu!\n");
else if (soma2 > soma1)
    printf("\n A carta 2 venceu!\n");
else
    printf("\nEmpate!\n");
    return 0;
}
