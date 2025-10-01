/*6. Escreva um procedimento que recebe por parâmetro 3 valores reais X, Y e Z e que verifique se
esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é
o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte
propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma
do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo
formado observando as seguintes definições:
1. Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
2. Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais;
3. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes;
Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e para
cada triângulo, acione o procedimento. */

#include <stdio.h>
#include <stdlib.h>

void identificadorTriangulo(float x, float y, float z){

    if((x >= y + z) || (y >= x + z) || (z >= x + y)) {
        printf("O triangulo nao existe.\n");
    } 
    else if(x == y && x == z) {
        printf("O triangulo eh equilatero.\n");
    }
    else if((x == y && x != z) || (y == z && y != x)) {
        printf("O triangulo eh isoceles.\n");
    }
    else {
        printf("O triangulo eh escaleno.\n");
    }

}

int main() {

    float ladoX, ladoY, ladoZ;
    int controle;

    do {
        printf("Deseja verificar a existencia de um triangulo? Digite 1 para prosseguir, ou outro numero para encerrar o programa:\n");
        scanf("%d", &controle);

        if(controle == 1) {

            printf("Informe os lados do triangulo:\n");
            scanf("%f %f %f", &ladoX, &ladoY, &ladoZ);
            identificadorTriangulo(ladoX, ladoY, ladoZ);

        }


    } while(controle == 1);

    return 0;


}