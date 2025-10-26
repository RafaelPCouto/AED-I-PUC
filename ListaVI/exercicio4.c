// 4. Escreva um programa que preencha dois vetores de inteiros A e B com 4 números ordenados
// (em cada vetor). Em seguida, implemente um procedimento Merge, que receba os vetores A e B
// e retorne um vetor C ordenado, combinando os resultados dos vetores A e B. Imprima o vetor C
// na função main. A, B e C devem ser alocados usando malloc ou calloc.
// Obs. 1: O vetor C deve ser instanciado (“alocado”) no procedimento Merge.
// Obs. 2: Após a impressão dos valores, o comando free deve ser executado para liberação de
// memória dos vetores A, B e C.
// Ex.: A = {5, 8, 12, 16} , B = {3, 7, 14, 15} , C = {3, 5, 7, 8 ,12, 14, 15, 16}

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

void merge(int A[], int B[])
{

    int j = 0, k = 0;
    int *C;

    C = (int *)malloc(TAM * 2 * sizeof(int));

    for (int i = 0; i < TAM * 2; i++)
    {

        if (A[j] <= B[k])
        {
            C[i] = A[j];
            j++;
        }
        else
        {
            C[i] = B[k];
            k++;
        }
    }

    printf("Vetor C = {");
    for (int i = 0; i < TAM * 2; i++)
    {
        printf("%d,", C[i]);
    }
    printf("}");
    free(C);
}

int main()
{

    int *A, *B;

    A = (int *)malloc(TAM * sizeof(int));
    B = (int *)malloc(TAM * sizeof(int));

    printf("Vamos preencher os vetores A e B:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um valor para a posicao %d:\n", i + 1);
        printf("Vetor A:\n");
        scanf("%d", &A[i]);
        printf("Vetor B:\n");
        scanf("%d", &B[i]);
    }

    printf("\n\n\n\n");
    printf("Vetor A = {");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d,", A[i]);
    }
    printf("}");
    printf("\n\n\n\n");
    printf("Vetor C = {");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d,", B[i]);
    }
    printf("}");

    merge(A, B);

    free(A);
    free(B);
}