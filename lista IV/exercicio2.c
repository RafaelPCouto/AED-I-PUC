#include <stdio.h>
#include <stdlib.h>

// Procedimento para ler  solicitar e ler os dados de cada família
void lerFamilias()
{

    float rendaMediaPerCapita = 0, rendaMensal;
    int numeroDeDependentes, somaNumeroDependentes = 0;

    do
    {
        printf("Insira a renda mensal:\n");
        scanf("%f", &rendaMensal);
        if (rendaMensal >= 0)
        {
            rendaMediaPerCapita += rendaMensal;

            printf("Insira o numero de dependentes:\n");
            scanf("%d", &numeroDeDependentes);
            somaNumeroDependentes += numeroDeDependentes;

            printf("rendaMediaPerCapita: %f\nnumeroDeDependentes: %d", rendaMediaPerCapita, somaNumeroDependentes);
        }
    } while (rendaMensal >= 0);
    printf("Renda media per capita da cidade eh igual a R$%.2f\n", rendaMediaPerCapita / somaNumeroDependentes);
}

int main()
{

    lerFamilias();


    return 0;
}