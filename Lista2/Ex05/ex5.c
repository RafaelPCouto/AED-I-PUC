// 5. Escreva um programa que mostre ao usuário um menu com quatro opções de operações
// matemáticas (1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo). O usuário escolhe
// uma das opções (1 a 5), e o seu programa recebe dois valores numéricos do usuário e realiza a
// operação escolhida (somente a escolhida), mostrando o resultado. Caso a opção digitada seja
// inválida (ou seja, menor que 1 ou maior que 5) ou os valores recebidos sejam inválidos, seu
// programa deve mostrar uma mensagem indicando incorreção na entrada de dados.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numOp;
    float num1, num2;

    printf("Selecione a operação desejada:\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Modulo\n");
    scanf("%d", &numOp);

    if (numOp == 1)
    {
        printf("Digite dois numeros:\n");
        scanf("%f %f", &num1, &num2);
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    }
    else if (numOp == 2)
    {
        printf("Digite dois numeros:\n");
        scanf("%f %f", &num1, &num2);
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    }
    else if (numOp == 3)
    {
        printf("Digite dois numeros:\n");
        scanf("%f %f", &num1, &num2);
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    }
    else if (numOp == 4)
    {
        printf("Digite dois numeros:\n");
        scanf("%f %f", &num1, &num2);
        if (num2 == 0)
        {
            printf("Indeterminacao matematica (divisao por 0)!");
        }
        else
        {
            printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        }
    }
    // else if (numOp == 5)
    // {
    //     printf("Digite dois numeros:\n");
    //     scanf("%f %f", &num1, &num2);
    //     printf("%.2f % %.2f = %.2f", num1, num2, num1 % num2);
    // }
    else
    {
        printf("Operacao invalida!");
    }
}