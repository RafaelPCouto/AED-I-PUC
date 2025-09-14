// 7. Escreva um programa que leia dois inteiros e imprima um retângulo com as dimensões
// digitadas. Ex.: para os números 3 e 5, seria impresso:
// *****
// *   *
// *****
// Enquanto que para os números 5 e 3 seria impresso:
// ***
// * *
// * *
// * *
// ***

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, i, j;

    scanf("%d %d", &linhas, &colunas);

    for (i = 1; i <= linhas; i++)
    {
        for (j = 1; j <= colunas; j++)
        {
            if (i == 1 || i == linhas)
            {
                printf("*");
            }
            else if (j == 1 || j == colunas)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}