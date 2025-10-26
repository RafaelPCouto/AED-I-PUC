// 10. Amplie a struct Veículo adicionando o campo capacidade, que irá representar o número de
// passageiros. Implemente um procedimento preencheCapacidade que preencha um vetor com 10
// veículos, armazenando suas capacidades. Em seguida, faça um procedimento
// copiaGrandesCapacidades que copie veículos com capacidade acima de 30 passageiros para um
// novo vetor de até 10 elementos. Ao final, mostre o vetor resultante.
// A seguir a sugestão de assinatura dos procedimentos que deverão ser criados.
// void preencheCapacidade(Veiculo vetor[], int length);
// void copiaGrandesCapacidades(Veiculo vetor[], int length, Veiculo vetorGrandes[]);

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 10

struct Veiculo {
    int id;
    float quilometragem;
    int capacidade;
};

void preencheCapacidade(struct Veiculo vetor[], int length) {

    for(int i = 0; i < length; i++) {
        vetor[i].id = i + 1;
        vetor[i].quilometragem = rand() %100;
        printf("Digite a capacidade do veiculo %d:\n", i+1);
        scanf("%d", &vetor[i].capacidade);
    }

}

void copiaGrandesCapacidades(struct Veiculo vetor[], int length, struct Veiculo vetorGrandes[], int *qtd) {



    for(int i = 0; i < length; i++) {
        if(vetor[i].capacidade > 30) {
            vetorGrandes[*qtd] = vetor[i]; // utilizando a contagem de qtd para atribuir os valores, uma vez que qtd é inicializado com o valor 0
            (*qtd)++;
        }
    }

}

int main() {

    srand(time(NULL));
    struct Veiculo frota[tamanho];
    struct Veiculo veiculosGrandes[tamanho];

    int qtd = 0;


    preencheCapacidade(frota, tamanho);
    copiaGrandesCapacidades(frota, tamanho, veiculosGrandes, &qtd);

    printf("Vetor resultante:\n");

    for(int i = 0; i < qtd; i++) {
        printf("Veiculo %d:\n", i + 1);
        printf("ID : %d\nQuilometragem : %.2f\nCapacidade : %d\n", veiculosGrandes[i].id, veiculosGrandes[i].quilometragem, veiculosGrandes[i].capacidade);
    }

}