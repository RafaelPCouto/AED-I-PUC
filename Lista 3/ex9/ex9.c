// 9. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E:
// E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!

#include <stdio.h>

int main()
{
    int n, i, j;
    double e = 1.0, fatorial;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fatorial = 1.0;
        for (j = 1; j <= i; j++)
        {
            fatorial *= j;
        }
        e += 1.0 / fatorial;
    }

    printf("Valor de E: %lf\n", e);

    return 0;
}
