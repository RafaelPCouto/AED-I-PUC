#include <stdio.h>

int main() {

    int num1;

    printf("Insira o numero desejado: ");
    scanf("%d", &num1);
    fflush(stdin);

    printf("Sucessor:\n %d", ++num1);

    return 0;
}