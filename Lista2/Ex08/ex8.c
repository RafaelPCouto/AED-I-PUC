// 8. Escreva um programa que calcule a velocidade de queda de um corpo em função do tempo,
// partindo da velocidade zero, considerando a gravidade de diferentes planetas conforme a tabela
// a seguir. Seu programa deve receber do usuário o tempo (em milissegundos) de queda e um
// caractere indicando o planeta em que a queda ocorreu.
// Planeta Gravidade Caractere indicativo
// Terra 9,807 m/s² T
// Vênus 8,87 m/s² V
// Mercúrio 3,7 m/s² M
// O tempo informado deve ser maior que zero

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempoDeQueda;
    char planeta;

    printf("Insira o planeta:\n");
    scanf(" %c", &planeta);

    printf("Insira o tempo de queda do corpo:\n");
    scanf("%f", &tempoDeQueda);

    if (tempoDeQueda <= 0)
    {
        printf("Tempo de queda deve ser maior do que zero.");
    }
    else
    {
        if (planeta == 't' || planeta == 'T')
        {
            printf("Velocidade de queda igual a %.2f", tempoDeQueda/1000 * 9.807);
        }
        else if (planeta == 'v' || planeta == 'V')
        {
            printf("Velocidade de queda igual a %.2f", tempoDeQueda/1000 * 8.87);
        }
        else if (planeta == 'm' || planeta == 'M')
        {
            printf("Velocidade de queda igual a %.2f", tempoDeQueda/1000 * 3.7);
        }
        else
        {
            printf("Planeta invalido");
        }
    }
}