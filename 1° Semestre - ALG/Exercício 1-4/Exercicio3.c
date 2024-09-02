#include <stdio.h>
// Função que realiza a conversão de C° para F°
float calculocparaf(float celsius)
{
  return (celsius * 9 / 5) + 32;
}
// Função que realiza a conversão de F° para C°
float calculofparac(float fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9;
}

int main()
{
  float celsius, fahrenheit;

  // Cálculo C° para F°
  printf("Digite a temperatura em C°: ");
  scanf("%f", &celsius);
  fahrenheit = calculocparaf(celsius);
  printf("A temperatura em F° é: ""%.2f\n", fahrenheit);

  printf("\n");

  // Cálculo F° para C°
  printf("Digite a temperatura em F°: ");
  scanf("%f", &fahrenheit);
  celsius = calculofparac(fahrenheit);
  printf("A temperatura em C° é: ""%.2f\n", celsius);

  return 0;
}
