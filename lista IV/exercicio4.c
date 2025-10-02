/*4. Escreva uma função que receba como parâmetro um valor n inteiro positivo, calcule e retorne
o valor de E, definido pela equação abaixo*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

float calculaE(int n) {
    float E = 1.0; // começa com o primeiro termo da série
    int i, j;
    float fatorial;

    for (i = 1; i <= n; i++) {
        fatorial = 1.0;
        for (j = 1; j <= i; j++) {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    return E;
}

int main() {
    int n;
    printf("Digite um valor inteiro positivo para n: ");
    scanf("%d", &n);

    if (n >= 0) {
        float resultado = calculaE(n);
        printf("O valor de E para n = %d eh: %.6f\n", n, resultado);
    } else {
        printf("Por favor, digite um numero inteiro positivo.\n");
    }

    return 0;
}