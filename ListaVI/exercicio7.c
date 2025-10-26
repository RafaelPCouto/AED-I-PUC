// 7. Escreva um programa que preencha um vetor de 20 veículos usando a struct para armazenar
// as identificações e quilometragem dos veículos de uma empresa de transporte. Depois, o
// programa deve solicitar ao usuário um número de identificação para pesquisar no vetor e mostrar
// todas as posições onde essa identificação aparece

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Veiculo {
    int id;
    float quilometragem;
};

int main() {

    srand(time(NULL));
    int idPesquisa;

    struct Veiculo frota[20];

    for(int i = 0; i < 20; i++) {
        frota[i].id = rand() % 10;
        printf("Digite a quilometragem do veiculo %d:\n", i);
        scanf("%f", &frota[i].quilometragem);
    }

    printf("Digite o id que deseja perquisar:\n");
    scanf("%d", &idPesquisa);

    for(int i = 0; i < 20; i++) {
        if(frota[i].id == idPesquisa) {
            printf("Veiculo posicao %d\n", i);
        }
    }

}