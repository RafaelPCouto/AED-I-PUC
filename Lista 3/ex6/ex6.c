/*6. Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci.
Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de Fibonacci. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, a = 0, b = 1, proximo;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Os %d primeiros termos da sequencia de Fibonacci sao:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%lld ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");
    return 0;
}
