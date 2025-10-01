/*7. Implemente um programa em C que leia dois inteiros, armazenando-os em variáveis. O
programa deve comparar os endereços das variáveis e exibir o maior deles. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Insira dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    printf("Enderecos:\nn1 = %p\nn2 = %p\n", &n1, &n2);
    if(&n1 > &n2) {
        printf("O endereco de n1 eh maior.\n");
        return 1;
    }
    else if(&n1 < &n2) {
        printf("O endereco de n2 eh maior.\n");
        return 1;
    }

    printf("Os enderecos de n1 e n2 sao iguais(impossivel rsrs)\n");

    return 0;

}