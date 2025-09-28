#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

/* Exercício 1 */

void exercicio1()
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
    int i, face;
    int face1 = 0, face2 = 0, face3 = 0, face4 = 0, face5 = 0, face6 = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        face = rand() % 6 + 1;

        if (face == 1)
            face1++;
        else if (face == 2)
            face2++;
        else if (face == 3)
            face3++;
        else if (face == 4)
            face4++;
        else if (face == 5)
            face5++;
        else
            face6++;
    }

    printf("Resultados:\nFace 1: %d\nFace 2:%d\nFace 3:%d\nFace 4: %d\nFace 5: %d\nFace 6:%d\n", face1, face2, face3, face4, face5, face6);
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

void exercicio5()
{
    float litros, distancia, total_litros = 0, total_distancia = 0, preco_litro = 6.0;

    do
    {
        do
        {
            printf("Quantos litros deseja abastecer? ");
            scanf("%f", &litros);
        } while (litros <= 0);

        do
        {
            printf("Qual a distancia percorrida desde o ultimo abastecimento (km)? ");
            scanf("%f", &distancia);
        } while (distancia <= 0);

        total_litros += litros;
        total_distancia += distancia;

    } while (total_litros <= 200);

    float valor_arrecadado = total_litros * preco_litro;
    float consumo_medio = total_distancia / total_litros;

    printf("\nValor arrecadado: R$ %.2f\n", valor_arrecadado);
    printf("Consumo medio: %.2f km/l\n", consumo_medio);
}

/* Chamando as funções*/

int main()
{

    int opcao;

    do
    {
        printf("Escolha a opcao desejada:\n1-exercicio 1\n2-exercicio 2\n3-exercicio 3\n4-exercicio 4\n5-exercicio 5\n0 - Sair\n");

        scanf("%d", &opcao);

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
            exercicio3();
        }
        else if (opcao == 4)
        {
            exercicio4();
        }
        else if (opcao == 5)
        {
            exercicio5();
        }
        else if (opcao == 0)
        {
            printf("Finalizando o programa...\n");
            return 0;
        }
        else
        {
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
}
