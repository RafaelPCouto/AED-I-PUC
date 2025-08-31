#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int w;
    float x, y, z, resultado;

    while (w != 0)
    {
        printf("1 - Media Geometrica\n2 - Media Ponderada\n3 - Media Harmonica\n4 - Media Aritmetica\n0 - Encerrar execucao\nSelecione a media que deseja calcular:\n");
        scanf("%d", &w);

        if (w == 0)
        {
            printf("Encerrando execucao.");
        }
        else if (w <= 4 && w >= 0)
        {
            printf("Escolha seus numeros:\n");
            scanf("%f %f %f", &x, &y, &z);

            if (w == 1)
            {
                resultado = pow((x * y * z), 0.5);
                printf("Resultado = %f\n", resultado);
            }
            else if (w == 2)
            {
                resultado = (x + 2 * y + 3 * z) / 6;
                printf("Resultado = %f\n", resultado);
            }
            else if (w == 3)
            {
                resultado = (3 / (1 / x + 1 / y + 1 / z));
                printf("Resultado = %f\n", resultado);
            }
            else if (w == 4)
            {
                resultado = (x + y + z) / 3;
                printf("Resultado = %f\n", resultado);
            }
        }
        else {
            printf("Opcao invalida.\n");
        }
    }
}