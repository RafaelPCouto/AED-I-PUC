// 6. Escreva um programa que receba três valores do usuário: A, B e C. Seu programa deve verificar
// se C é divisível por A e/ou B. Caso C seja divisível por A e B, imprima na tela “Divisível por ambos”.
// Caso C seja divisível por A ou por B, mas não por ambos, imprima na tela “Divisível por um”. Caso
// C não seja divisível nem por A nem por B, imprima na tela “Não é divisível”. Caso o usuário digite
// um valor negativo ou zero para A e/ou B, imprima na tela “Valor inválido” e finalize a execução
// do programa

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    printf("Digite 3 valores:\n");
    scanf("%d %d %d", &A, &B, &C);

    if (A == 0 || B ==0) {
        printf("Valor invalido.");
        return 0;
    }

    if (C % A == 0 && C % B == 0)
    {
        printf("Divisivel por ambos.");
    }
    else if ((C % A == 0 && C % B != 0) || (C % A != 0 && C % B == 0))
    {
        printf("Divisivel por um.");
    }
    else if (C % A == 0 && C % B == 0)
    {
        printf("Nao e divisivel.");
    }
    else {
        printf("Valor de C menor do que os divisores.");
    }
}