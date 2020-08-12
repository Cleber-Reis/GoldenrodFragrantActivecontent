#include <stdio.h>

/* 
Faça um algoritmo em C que calcula a área de um triangulo retângulo e mostre para o usuário. A base e altura deverão ser carregadas em variáveis.
*/
int main(void) 
{
    float x, y, area;

    printf("\nDigite o valor da base do triângulo: ");
    scanf("%f", &x);

    printf("\nDigite o valor da altura do triângulo: ");
    scanf("%f", &y);

    area = (x * y)/2;

    printf("\nO valor da area do triângulo é: %.2f", area);

    printf("\n");
    printf("\n");
    getchar();
    system("pause");
  return 0;
}