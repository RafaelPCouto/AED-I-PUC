// 2. Considere uma matriz quadrada MAX_LIN x MAX_LIN. Construa uma função que calcule
// a soma dos valores posicionados acima da diagonal principal.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int MAX_LIN=10;
const int MAX_COL=5;

int calcAcimaDiagonal(int matriz[MAX_LIN][MAX_COL]) {

    int i, j, soma = 0;

    for(i = 0; i < MAX_LIN; i++) {
        for(j = 0; j < MAX_COL; j++) {
            if(j > i) {
                soma += matriz[i][j];
            }
        }
    }

    return soma;

}

int main() {

    int matriz[MAX_LIN][MAX_COL], soma;

    srand(time(NULL));

    for(int i = 0; i < MAX_LIN; i++) {
        for(int j = 0; j < MAX_COL; j++) {
            matriz[i][j] = rand();
        }
    }

    soma = calcAcimaDiagonal(matriz);

    printf("%d\n", soma);
}