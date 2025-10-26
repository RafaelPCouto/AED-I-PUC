// 8. Escreva um programa que utilize alocação dinâmica para criar um vetor de 100 números de
// série de modelos de veículos cujos números são múltiplos de 4, mas que não terminam com o
// dígito 4. Certifique-se de que o vetor tenha exatamente 100 modelos e, ao final, libere a memória
// alocada

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *numeros = (int *) malloc(100 * sizeof(int));

    srand(time(NULL));

    int count = 0;
    while (count < 100) {
        int num = rand() % 1000;
        if (num % 4 == 0 && num % 10 != 4) {
            numeros[count] = num;
            count++;
        }
    }

    printf("Vetor de 100 números de série válidos:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);
    return 0;
}