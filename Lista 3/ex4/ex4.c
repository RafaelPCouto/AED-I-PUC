/*4. Desenvolva um algoritmo que leia um valor n entre 0 e 9 e escreva na tela a tabuada
correspondente do número. Para o número 4 por exemplo, seria printado:
4 x 0 = 0
4 x 1 = 4
4 x 2 = 8
...
Utilize a estrutura e repetição for.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("Escolha um numero de um algarismo para obter a sua tabuada:\n");

    scanf("%d", &valor);

    for (int i = 0; i <= 9; i++)
    {
        printf("%d x %d = %d\n", valor, i, valor * i);
    }

    return 0;
}