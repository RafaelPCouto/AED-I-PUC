#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);


    printf("Digite a nota 2: ");
    scanf("%f", &n2);


    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Soma:\n %.2f\n", n1 + n2 + n3);
    printf("Media:\n %.2f\n", (n1 + n2 + n3) / 3);
    printf("Produto:\n %.2f\n", n1 * n2 * n3);

    return 0;
}