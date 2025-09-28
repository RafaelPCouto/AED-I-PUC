#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

/* Exercício 1 */

int exercicio1()
{
    int a = 7, b = 3, c;

    float x;
    bool y;

    c = (a + b) * 2 - 5;
    x = (a > b) ? (a / (float)b) : (b / (float)a);
    y = (c % 2 == 0);
    if (y == true)
        printf("Resultado 1: %d\n", c + (int)x);
    else
    {
        printf("Resultado 2: %d\n", c-- + (int)x);
    }

    return 0;
}

/* Exercício 2*/

void exercicio2()
{

    int n = 3, j, i, k = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            k--;
        }
    }

    printf("Resultado: %d\n\n", k);
    printf("Nota-se que o resultado sera igual a n ao quadrado - n. Ou seja:\n");

    double potN = pow(n, 2);

    printf("%lf - %d = %d", potN, n, k);
}

/* Exercício 3*/

void exercicio3()
{
}

/* Exercício 4*/

void exercicio4()
{

    int i = 0, n, nInvertido = 0, armazenador = 0;

    printf("Digite um numero para inverter seus caracteres:\n");

    do
    {

        scanf("%d", &n);

        if (n <= 0)
        {
            printf("O numero inserido deve ser maior do que 0, tente novamente:\n");
        }

        else
        {

            while (n != 0)
            {

                armazenador = armazenador + (n % 10);
                n /= 10;
                armazenador *= 10;
            }

            nInvertido = armazenador / 10;

            printf("Numero invertido eh igual a %d\n", nInvertido);

            break;
        }

    }

    while (n <= 0);
}

/* Exercicio 5*/

/* Chamando as funções*/

int main()
{

    int opcao;

    printf("Escolha a opcao desejada:\n1-exercicio 1\n2-exercicio 2\n3-exercicio 3\n4-exercicio 4\n5-exercicio 5\n0 - Sair\n");

    do
    {

        scanf("%d", opcao);

        if (opcao == 1)
        {
            exercicio1();
        }
        else if (opcao == 2)
        {
            exercicio2();
        }
        else if (opcao == 3)
        {
        }
        else if (opcao == 4)
        {
            exercicio4();
        }
        else if (opcao == 5) {
            exercicio5();
        }
    }
}
