// 8. Escreva um programa que verifique se um número é palíndromo.
// Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
// Exemplos: 454 ou 10501

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, original, numInvert = 0, resto;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        resto = num % 10;
        numInvert = numInvert * 10 + resto;
        num = num / 10;
    }

    if (original == numInvert)
    {
        printf("%d eh um palindromo\n", original);
    }
    else
    {
        printf("%d nao eh um palindromo\n", original);
    }
}