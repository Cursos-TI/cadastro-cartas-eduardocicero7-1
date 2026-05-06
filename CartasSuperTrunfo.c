#include <stdio.h>

int main(){

  // declaração de variáveis 
  // carta 1:

  char estado;
  char codigocarta[10];
  char cidade[50];
  int populacao,  pontos_turisticos;
  float area, pib;

  // carta 2

  char estado2;
  char codigocarta2[10];
  char cidade2[50];
  int populacao2,  pontos_turisticos2;
  float area2, pib2;

  //ENTRADA E SAIDA DAS CARTAS

  printf("=====CARTA 1==== \n");

  printf("INFORME O ESTADO(A-H ): ");
  scanf(" %c", &estado);

  printf("INFORME O CODIGO DA CARTA: (EX- A01)");
  scanf( " %s", codigocarta);

  printf("INFORME O NOME DA CIDADE: ");
  scanf("  %49[^\n]", cidade);  // scanf(" %[^\n]", cidade);

  printf("INFORME a populacao da cidade: ");
  scanf("%d", &populacao);

  printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS: ");
  scanf("%d", &pontos_turisticos);

  printf("INFORME A AREA EM KM2 DA CIDADE: ");
  scanf("%f", &area);

  printf("INFORME O PIB DA CIDADE: ");
  scanf("%f", &pib);


  printf("===CARTA 2=== \n");

  printf("INFORME O ESTADO 2(A-H ):  ");
  scanf(" %c", &estado2);

  printf("INFORME O CODIGO DA CARTA 2: (EX- A01)");
  scanf( " %s", codigocarta2);

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

  //print f com os dadod das cartas 

  printf("===DADOS CARTA 1=== \n");

  printf("ESTADO- %c, CODIGO DA CARTA- %s \n ", estado, codigocarta);
  printf("CIDADE- %s, PONTOS TURISTICOS- %d \n", cidade, pontos_turisticos);
  printf("POPULACAO- %d, AREA EM KM2- %f \n",populacao, area );
  printf("PIB- %f \n", pib ); 

 printf("===DADOS CARTA 2=== \n");

 printf("ESTADO 2- %c, CODIGO DA CARTA 2- %s, \n ", estado2, codigocarta2);
 printf("CIDADE 2- %s, PONTOS TURISTICOS 2- %d, \n",cidade2, pontos_turisticos2);
printf("POPULACAO 2- %d, AREA EM KM2 2- %f, \n", populacao2, area2 );
  printf("PIB 2- %f", pib2);



}


    








