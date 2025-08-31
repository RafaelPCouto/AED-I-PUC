// 2. Escreva um programa que calcule a amplitude total (AT) de uma série de cinco números. A
// amplitude e definida pela diferença entre o menor e o maior número.
// AT = maior valor – menor valor

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, n3, n4, n5, maior, menor, AT;

    printf("Digite 5 numeros para obter a amplitude:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    maior = n1;
    menor = n1;

    // Maior

    if (n2 > maior)
    {
        maior = n2;
    }
    if (n3 > maior)
    {
        maior = n3;
    }
    if (n4 > maior)
    {
        maior = n4;
    }
    if (n5 > maior)
    {
        maior = n5;
    }

    // Menor

    if (n2 < menor)
    {
        menor = n2;
    }
    if (n3 < menor)
    {
        menor = n3;
    }
    if (n4 < menor)
    {
        menor = n4;
    }
    if (n5 < menor)
    {
        menor = n5;
    }

    AT = maior - menor;

    printf("Amplitude igual a %.2f", AT);

    return 0;
}