#include <stdio.h>
float calculo(float  juros, int tempo, float capital, float taxa) {
  return capital * taxa * tempo;
}

int main() 
{
  float juros, capital, taxa, tempo;
  
  printf("Digite o valor da aplicação financeira: ");
  scanf("%f", &capital);

  printf("Digite a taxa de juros: ");
  scanf("%f", &taxa);
  
  printf("Digite o tempo da aplicação: ");
  scanf("%f", &tempo);
    
  juros = calculo(juros, tempo, capital, taxa);
  
  printf("O valor do juros simples acumulado é: ""%.2f", juros);
  return 0;
}