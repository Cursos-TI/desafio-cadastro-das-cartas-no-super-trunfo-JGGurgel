#include <stdio.h>

int main() {

  char letra_estado;
  int codigo_cidade;
  char codigo_carta[3];
  char nome[255];
  int populacao;
  float area;
  float PIB;
  int qtd_pontos_turisticos;

  // recebe dados do usuário
  printf("Digite o código do estado: \n");
  scanf("%c", &letra_estado);

  printf("Digite o código da cidade: \n");
  scanf("%d", &codigo_cidade);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome);

  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade: \n");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &PIB);

  printf("Digite a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &qtd_pontos_turisticos);

  // exibe dados inseridos

  printf("O código do estádo é: %c\n", letra_estado);

  printf("O código da cidade é: %d\n", codigo_cidade);

  printf("O código da carta é: %c0%d\n", letra_estado, codigo_cidade);

  printf("O nome da cidade é: %s\n", nome);

  printf("A população da cidade é: %d\n", populacao);

  printf("A área da cidade é: %f\n", area);

  printf("O PIB da cidade é: %f\n", PIB);

  printf("O número de pontos turísticos da cidade é: %d\n",
         qtd_pontos_turisticos);

  return 0;
}
