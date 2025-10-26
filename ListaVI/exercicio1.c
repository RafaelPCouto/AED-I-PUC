// 1. Construa uma função que calcule e retorne a soma dos valores de uma linha i de uma matriz.
// A função deverá ter os seguintes argumentos:
// - A passagem por referência da matriz;
// - O número da linha a ser calculada

#include <stdio.h>
#include <stdlib.h>
const int MAX_LIN=10;
const int MAX_COL=5;

int somaValoresLinha(int matriz[MAX_LIN][MAX_COL], int linha) {
    int soma = 0;

    for(int i = 0; i < MAX_COL; i++) {
        soma += matriz[linha][i];
    }

    return soma;
}

int main() {

    int matriz[MAX_LIN][MAX_COL];
    int linha, somaLinha;
    printf("Qual linha deseja somar?\n");
    scanf("%d", &linha);

    somaLinha = somaValoresLinha(matriz, linha);

    printf("Soma :\n%d", somaLinha);
}