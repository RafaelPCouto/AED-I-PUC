/*3. Escreva um algoritmo que declare um número entre 1 e 20 e peça para o usuário adivinhar qual
é. A cada palpite o programa diz se o número foi mais alto ou mais baixo que o número correto.
Utilize a estrutura e repetição do-while.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num, palpite;

    num = 1 + rand() % 20;
    printf("%d", num);

    do
    {
        printf("Tente acertar:\n");
        scanf("%d", &palpite);
        if (palpite < num)
        {
            printf("Tente um numero maior.\n");
        }
        else if (palpite > num)
        {
            printf("Tente um numero menor.\n");
        }
        else
        {
            printf("Parabéns, você acertou!\n");
        }
    } while (palpite != num);
}