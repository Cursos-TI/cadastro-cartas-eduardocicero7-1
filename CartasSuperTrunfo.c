#include <stdio.h>

int main()
{

  // DECLARAÇÃO DE VARIÁVEIS 
  // CARTA 1:

  char estado;
  char codigocarta[10];
  char cidade[50];
  int populacao, pontos_turisticos;
  float area, pib;
  float densidade, pibperc;

  // CARTA 2:

  char estado2;
  char codigocarta2[10];
  char cidade2[50];
  int populacao2, pontos_turisticos2;
  float area2, pib2;
 float densidade2, pibperc2;
  
 // ENTRADA DAS INFORMAÇÕES DAS CARTAS 
// CARTA 1

  printf("=====CARTA 1==== \n");

  printf("INFORME O ESTADO: (A-H ) \n");
  scanf(" %c", &estado);

  printf("INFORME O CODIGO DA CARTA (EX- A01): ");
  scanf(" %s", codigocarta);

  printf("INFORME O NOME DA CIDADE: ");
  scanf("  %49[^\n]", cidade); // scanf(" %[^\n]", cidade);

  printf("INFORME a populacao da cidade: ");
  scanf("%d", &populacao);

  printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS: ");
  scanf("%d", &pontos_turisticos);

  printf("INFORME A AREA EM KM2 DA CIDADE: ");
  scanf("%f", &area);

  printf("INFORME O PIB DA CIDADE: ");
  scanf("%f", &pib);

  densidade= populacao / area;

  pibperc= pib / populacao;


// CARTA 2:

  printf("===CARTA 2=== \n");

  printf("INFORME O ESTADO 2: (A-H ) ");
  scanf(" %c", &estado2);

  printf("INFORME O CODIGO DA CARTA 2: (EX- A01)");
  scanf(" %s", codigocarta2);

  printf("INFORME O NOME DA CIDADE 2: ");
  scanf("  %49[^\n]", cidade2);

  printf("INFORME A POPULACAO DA CIDADE 2: ");
  scanf("%d", &populacao2);

  printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS 2: ");
  scanf("%d", &pontos_turisticos2);

  printf("INFORME A AREA EM KM2 DA CIDADE 2: ");
  scanf("%f", &area2);

  printf("INFORME O PIB DA CIDADE 2: ");
  scanf("%f", &pib2);

  densidade2= populacao2 / area2;


   pibperc2= pib2 / populacao2;

  

  // print f com os dadod das cartas

  printf("===DADOS CARTA 1=== \n");

  printf("ESTADO: %c  \n", estado );
  printf("CODIGO DA CARTA: %s \n", codigocarta);
  printf("CIDADE: %s \n", cidade);
  printf("PONTOS TURISTICOS: %d \n", pontos_turisticos);
  printf("POPULACAO: %d \n", populacao);
  printf("AREA: %.2f km2 \n", area);
  printf("PIB: %.2f \n", pib);
  printf("DENSIDADE POPULACIONAL: %.2f hab/km2 \n", densidade);
  printf("PIB PER CAPTA: %.2f \n", pibperc);


printf("====DADOS CARTA 2====  \n");


  printf("ESTADO: %c  \n", estado2 );
  printf("CODIGO DA CARTA: %s \n", codigocarta2);
  printf("CIDADE: %s \n", cidade2);
  printf("PONTOS TURISTICOS: %d \n", pontos_turisticos2);
  printf("POPULACAO: %d \n", populacao2);
  printf("AREA: %.2f km2 \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("DENSIDADE POPULACIONAL: %.2f hab/km2 \n", densidade2);
  printf("PIB PER CAPTA: %.2f \n", pibperc2);






}








