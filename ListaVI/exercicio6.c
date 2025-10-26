// 6. Escreva um progama que leia do teclado um valor n. Instancie, usando o comando malloc, uma
// matriz de números em ponto flutuante Mn×n. Encontre (a) o maior elemento, (b) o menor
// elemento, (c) a média dos elementos da matriz.
// Para as questões de 7 a 10 considere a criação e uma struct chamada Veiculo que contenha os
// seguintes campos:
// • id (número de frota) - int
// • quilometragem (quilometragem total do veículo) – float

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, j;
    float a, b, c = 0;
    
    printf("Digite o valor de n:\n");
    scanf("%d", &n);
    
    float **M = (float **) malloc(n * sizeof(float *));

    for( i = 0; i < n; i++) {
        M[i] = (float *) malloc(n * sizeof(float));
        for( j = 0; j < n; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    a = M[0][0];
    b = M[0][0];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(M[i][j] < b) {
                b = M[i][j];
            }
            if(M[i][j] > a) {
                a = M[i][j];
            }
            c += M[i][j];
        }
    }

    printf("Maior valor = %.2f\nMenor valor = %.2f\nMedia dos valores = %.2f\n", a, b, c / (n * n));

    for (i = 0; i < n; i++) {
        free(M[i]);
    }

    free(M);

    return 0;


}