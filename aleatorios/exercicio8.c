#include <stdio.h>
#include <stdlib.h>

void mostrarDados(int a, int b, int c) {

    printf("NOME_VARIAVEL  ENDERECO   VALOR\n n1     %p      %d\n n2      %p     %d\n n3      %p     %d\n", &a, a, &b, b, &c, c);

}

int main() {
    int n1, n2, n3;

    printf("Insira 3 valores inteiros para ver suas informacoes:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    mostrarDados(n1, n2, n3);

    return 0;

}