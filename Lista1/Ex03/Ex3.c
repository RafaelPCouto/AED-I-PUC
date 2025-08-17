#include <stdio.h>

int main() {

    int A, B;

    printf("Insira o primeiro valor: \n");
    scanf("%d", &A);
    // fflush(stdin);

    printf("Insira o segundo valor: ");
    scanf("%d", &B);
    // fflush(stdin);

    A = A + B;
    B = A - B;
    A = A- B;

    printf("A = %d\nB = %d\n", A, B);

    return 0;
}