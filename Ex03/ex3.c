// 3. Uma empresa vende o mesmo produto para quatro estados diferentes. Cada estado possui
// uma alíquota de imposto sobre o produto. Escreva um programa em que o usuário insira o valor
// e a primeira letra do estado de destino do produto. O programa deve retornar o preço final
// (produto + imposto). Se o estado não for válido, o sistema deve mostrar uma mensagem de erro.
// Indique o estado pelo primeiro caractere da sigla.
// Estado MG SP RJ ES
// Imposto 7% 12% 15% 8%
// Trate/rejeite as entradas inválidas.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorProduto;
    char estado;

    printf("Digite o valor:\n");
    scanf("%f", &valorProduto);
    printf("Digite a letra inicial do estado:\n");
    scanf(" %c", &estado);

    float mg = 1.07, sp = 1.12, rj = 1.15, es = 1.08;

    if (estado == 'm' || estado == 'M')
    {
        printf("Valor final: %.2f", valorProduto * mg);
    }
    else if (estado == 's' || estado == 'S')
    {
        printf("Valor final: %.2f", valorProduto * sp);
    }
    else if (estado == 'r' || estado == 'R')
    {
        printf("Valor final: %.2f", valorProduto * rj);
    }
    else if (estado == 'e' || estado == 'E')
    {
        printf("Valor final: %.2f", valorProduto * es);
    }
    else {
        printf("Valor inserido invalido.");
    }
}