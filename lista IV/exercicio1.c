#include <stdio.h>
#include <stdlib.h>

// Procedimento para ler as notas e calcular Médias Aritméticas ou Ponderadas
void calcularNotasAlunos(float n1, float n2, float n3, float n4, char mediaDesejada)
{

    // Condicional para definir se a média será aritmética ou ponderada

    if (mediaDesejada == 'M' || mediaDesejada == 'm')
    {
        printf("Media aritmetica: %.2f\n", (n1 + n2 + n3 + n4) / 4);
    }
    else if (mediaDesejada == 'W' || mediaDesejada == 'w')
    {
        printf("Media ponderada: %.2f\n", (n1 * 4) + (n2 * 3) + (n3 * 2) + (n4 * 1) / 10);
    }
}

// Função principal

int main()
{

    float n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    char mediaDesejada;

    do
    {
        printf("Bem vindo! Insira as notas do aluno.\n Caso queira encerrar a execucao, informe um numero menor do que zero:\n");

        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

        if (n1 < 0 || n2 < 0 || n3 < 0 || n4 < 0)
        {
            printf("Execucao encerrada\n");
            return 0;
        }

        // Loop para repetir inputs indesejados
        do
        {
            printf("Insira 'M' para media aritmetica ou 'W' para media ponderada:\n");
            scanf(" %c", &mediaDesejada);
        } while (mediaDesejada != 'M' && mediaDesejada != 'm' && mediaDesejada != 'w' && mediaDesejada != 'W');

        calcularNotasAlunos(n1, n2, n3, n4, mediaDesejada);

    } while (n1 >= 0 && n2 >= 0 && n3 >= 0 && n4 >= 0);

    return 0;
}