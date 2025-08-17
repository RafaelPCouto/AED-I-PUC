#include <stdio.h>
#include <math.h>

int main() {

    float valorInvestido, valorJuros;
    int mesesDuracao;

    printf("Insira o capital inicial investido: ");
    scanf("%f", &valorInvestido);

    printf("Insira o valor dos juros: ");
    scanf("%f", &valorJuros);

    printf("Insira a duracao do investimento em meses: ");
    scanf("%d", &mesesDuracao);

    printf("Valores finais:\n");

    float montanteFinal = valorInvestido * pow((1 + valorJuros), mesesDuracao);

    printf("Montante final: R$%.2f\n", montanteFinal);
    printf("Valor em juros rendidos: R$%.2f\n", montanteFinal - valorInvestido);

    return 0;
}