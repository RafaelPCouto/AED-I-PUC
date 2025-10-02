/*10. Escreva um procedimento chamado teste que recebe um valor n passado “por valor” e dois
inteiros b e k passados “por referência". Seu procedimento deve armazenar em b e k valores tais
que bk = n e b seja o menor valor possível. */

#include <stdio.h>
#include <stdlib.h>

void teste(int n, int *b, int *k) {
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            *b = i;
            *k = n / i;
            return;
        }
    }
}

int main() {
    int n, b, k;

    printf("Digite um valor inteiro positivo n: ");
    scanf("%d", &n);

    if (n > 0) {
        teste(n, &b, &k);
        printf("Menor b tal que b * k = n:\n");
        printf("b = %d, k = %d\n", b, k);
    } else {
        printf("Por favor, digite um número inteiro positivo.\n");
    }

    return 0;
}