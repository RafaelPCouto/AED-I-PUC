// 3. Considere uma matriz quadrada MAX_LIN x MAX_LIN. Construa um procedimento que
// escreva os elementos da diagonal secundária.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// diagonal secundária : i + j == MAX_LIN - 1

const int MAX_LIN=10;

void diagonalSecundaria(int matriz[][MAX_LIN], int vetor[]) {

    int i, j;

    for(i = 0; i < MAX_LIN; i++) {

        for(j = 0; j < MAX_LIN; j++) {

            if((i + j) == (MAX_LIN -1)) {
                vetor[i] = matriz[i][j];
                printf("%d\n", vetor[i]);
            }
        }
    }

}

int main() {

    int matriz[MAX_LIN][MAX_LIN], vetor[MAX_LIN];

    srand(time(NULL));

    for(int i = 0; i < MAX_LIN; i++)
        for(int j = 0; j< MAX_LIN; j++)
            matriz[i][j] = rand() % 100;
    
    diagonalSecundaria(matriz, vetor);

}