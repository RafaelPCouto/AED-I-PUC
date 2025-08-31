// 7. Escreva um programa que calcule as raízes da equação do 2º grau (ax² + bx + c); os valores de
// a, b e c são fornecidos pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;

    printf("Insira os valores de A B e C da equacao desejada:\n");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + pow(delta, 0.5)) / (2 * a);
    x2 = (-b - pow(delta, 0.5)) / (2 * a);

    printf("As raizes da equacao %.2fx^2 + %.2fx + %.2f sao: %.2f, %.2f", a, b, c, x1, x2);
}
