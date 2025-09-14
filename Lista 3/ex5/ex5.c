/*5. Escreva um programa que leia a altura de 5 homens e 5 mulheres, e imprima a média de altura
masculina, feminina e geral. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float alturaHomem = 0, alturaMulher = 0, alturaGeral = 0, alturaInput;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite a altura de um homem: (%d/5)\n", i);
        scanf("%f", &alturaInput);
        alturaHomem += alturaInput;
        alturaGeral += alturaInput;

        printf("Digite a altura de uma mulher: (%d/5)\n", i);
        scanf("%f", &alturaInput);
        alturaMulher += alturaInput;
        alturaGeral += alturaInput;
    }

    printf("Altura homens: %f\nAltura mulheres: %f\nAltura Geral: %f\n", alturaHomem, alturaMulher, alturaGeral);

    printf("Altura media dos homens: %.2f\n", alturaHomem / 5.0);
    printf("altura media das mulheres: %.2f\n", alturaMulher / 5.0);
    printf("Media de altura geral: %.2f\n", alturaGeral / 10.0);

    return 0;
}