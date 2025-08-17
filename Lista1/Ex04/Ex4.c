#include <stdio.h>

int main() {

    int eleitoresTotal, votosBrancos, votosNulos, votosValidos;

    printf("Digite o numero total de eleitores no municipio: ");
    scanf("%d", &eleitoresTotal);

    printf("Digite o numero de votos branco: ");
    scanf("%d", &votosBrancos);

    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Digute o numero de votos validos: ");
    scanf("%d", &votosValidos);

    printf("Porcentagens:\n");

    printf("Votos Validos: %.2f%%", 100.0 * votosValidos / eleitoresTotal);
    printf("\nVotos Brancos: %.2f%%", 100.0 * votosBrancos / eleitoresTotal);
    printf("\nVotos Nulos: %.2f%%", 100.0 * votosNulos / eleitoresTotal);

    return 0;
}