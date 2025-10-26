// 5. Desenvolva um programa que instancie um vetor de inteiros A utilizando malloc. O programa
// deve ler um valor k, onde k é positivo e menor que o tamanho do vetor (rejeite entradas
// inválidas). Implemente um procedimento que receba como parâmetros o vetor A, o tamanho do
// vetor |A| e o valor k. Retorne o k-ésimo menor elemento do vetor.
// Ex.: A = {3, 5, 7, 8 ,12, 14, 15, 16}, k = 3, retorno = 7.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 6

void kesimoValor(int A[], int tamanho, int k) {

    int i, j, temp;

    for(i = 0; i < tamanho - 1; i++) {
        for( j = 0; j < tamanho - 1 - i; j++) {
            if(A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("K-nesimo valor:\n");
    printf("%d", A[k-1]);

}

int main() {

    srand(time(NULL));

    int k, i;

    do {
        printf("Digite um valor para k:\n");
        scanf("%d", &k);
        if(k > tam || k <= 0) {
            printf("Valor invalido. Insira um valor menor do que %d e maior do que 0...\n", tam);
        }
    } while(k > tam || k <= 0);

    int *A = (int *) malloc(tam * sizeof(int));

    for(i = 0; i < tam; i++) {
        A[i] = rand() % 100;
    }

    kesimoValor(A, tam, k);

    free(A);

    return 0;

}