/*9. Implemente um procedimento chamado primo que recebe como parâmetro um inteiro m,
passado por valor, e dois outros inteiros, p1 e p2, passados por referência. O procedimento deve
armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor
número primo maior do que m. */

#include<stdio.h>
#include<stdlib.h>

void primo(int m, int *p1, int *p2) {
    int i = m - 1;

    while(i < m) {
        if (m % i == 0) {
            p1 = i;
            i = m;
        }
        else {
            i--;
        }
    }

    while(i >= m) {
        if ()
    }


}

int main() {

    int n1, n2, n3;

    printf("Insira tres numeros inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);


}