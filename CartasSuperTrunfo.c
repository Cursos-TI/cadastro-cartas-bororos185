#include <stdio.h>

int main() {
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float SuperPoder1;

  printf("==Cadastro da Carta1==\n");

  printf("Digite o Estado: ");
  scanf(" %c", &estado1);
  printf("Digite o Código: ");
  scanf("%s", codigo1);
  printf("Digite a Cidade: ");
  scanf("%s", cidade1);
  printf("Digite a População: ");
  scanf("%d", &populacao1);
  printf("Digite a Área: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite os Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Cálculos Carta1
  densidadePopulacional1 = (float) populacao1 / area1;
  pibPerCapita1 = pib1 / (float) populacao1;
  SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

  printf("\n==Carta1==\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", SuperPoder1); 

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float SuperPoder2;

  printf("\n==Cadastro da Carta2==\n");

  printf("Digite o Estado: ");
  scanf(" %c", &estado2);
  printf("Digite o Código: ");
  scanf("%s", codigo2);
  printf("Digite a Cidade: ");
  scanf("%s", cidade2);
  printf("Digite a População: ");
  scanf("%d", &populacao2);
  printf("Digite a Área: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite os Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculos Carta2
  densidadePopulacional2 = (float) populacao2 / area2;
  pibPerCapita2 = pib2 / (float) populacao2;
  SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

  printf("\n==Carta2==\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", SuperPoder2); 

  //Comparação Das Cartas
  printf("\n==Comparação de Cartas==\n");

  if(populacao1 > populacao2){
printf("População: Carta 1 venceu\n");
  }else{
    printf("População: Carta 2 venceu\n");
  }
 if(area1 > area2){
printf("Área: Carta 1 venceu\n");
  }else{
    printf("Área: Carta 2 venceu\n");
  }
  if(pib1 > pib2){
printf("PIB: Carta 1 venceu\n");
  }else{
    printf("PIB: Carta 2 venceu\n");
  }
  if(pontosTuristicos1 > pontosTuristicos2){
printf("Pontos Turisticos: Carta 1 venceu\n");
  }else{
    printf("Pontos Turisticos: Carta 2 venceu\n");
  }
  if(densidadePopulacional1 > densidadePopulacional2){
printf("Densidade Populacional: Carta 1 venceu\n");
  }else{
    printf("Densidade Populacional: Carta 2 venceu\n");
  }
  if(pibPerCapita1 > pibPerCapita2){
printf("PIB per Capita: Carta 1 venceu\n");
  }else{
    printf("PIB per Capita: Carta 2 venceu\n");
  }
  if(SuperPoder1 > SuperPoder2){
printf("Super Poder: Carta 1 venceu\n");
  }else{
    printf("Super Poder: Carta 2 venceu\n");
  }
  return 0;
}