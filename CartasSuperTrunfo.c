#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   //carta1
  char estado1[50]; 
  char codigo1[5];
  char nome1[50];
  int populacao1 ;
  float area1;
  float pib1;
  int pontos_turisticos1 ;

   //carta2
  char estado2[50] ;
  char codigo2[5];
  char nome2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // Área para entrada de dados da Carta 1
  
  printf("Carta 1 \n");
  printf("Digite nome do Estado: ");
  scanf("%s", &estado1);

  printf("Digite o Código: ");
  scanf("%s", &codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", &nome1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

   printf("Digite a Área: ");
  scanf("%f", &area1);
  
  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite a Quatidade de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos1);

   // Área para exibição dos dados da cidade da Carta 1

  printf("\n");
  printf("Dados da Carta 1 \n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);

 // Área para entrada de dados da Carta 2

  printf("\n");
  printf("Carta 2 \n");
  printf("Digite nome do Estado: ");
  scanf("%s", &estado2);

  printf("Digite o Código: ");
  scanf("%s", &codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", &nome2);

  printf("Digite a População: ");
  scanf("%d", &populacao2);

   printf("Digite a Área: ");
  scanf("%f", &area2);
  
  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite a Quatidade de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos2);


  // Área para exibição dos dados da cidade
   printf("\n");

  printf("Dados da Carta 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);


return 0;
} 
