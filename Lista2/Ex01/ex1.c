// 1. Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
// do meio dentre os três números.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3, maior, menor, medio;

    printf("Digite tres numeros:\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    fflush(stdin);

    if (num1 >= num2 && num2 >= num3) {
        maior = num1;
        medio = num2;
        menor = num3;
    }
    else if (num1 >= num3 && num3 >= num2) {
        maior = num1;
        medio = num3;
        menor = num2;
    }
    else if (num2 >= num1 && num1 >= num3) {
        maior = num2;
        medio = num1;
        menor = num3;
    }
    else if (num2 >= num3 && num3 >= num1) {
        maior = num2;
        medio = num3;
        menor = num1;
    }
    else if (num3 >= num2 && num2 >= num1) {
        maior = num3;
        medio = num2;
        menor = num1;
    }
    else {
        maior = num3;
        medio = num2;
        menor = num1;
    }

    printf("Menor = %.2f\nMedio = %.2f\nMaior = %.2f", menor, medio, maior);
}