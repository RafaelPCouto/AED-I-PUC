/*2. Escreva um programa que recebe um ano do usuário e imprime na tela todos os anos bissextos
do ano 1 até o ano digitado. Utilize a estrutura de repetição while.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano, contador = 1;

    printf("Digite um ano:\n");
    scanf("%d", &ano);
    //    fflush(stdin);

    while (contador <= ano)
    {
        if (contador % 4 == 0 && contador % 100 != 0)
        {
            printf("%d: Ano bissexto\n", contador);
        }
        contador++;
    }
}