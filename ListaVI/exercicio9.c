// 9. Escreva um algoritmo que crie um vetor para armazenar 5 veículos (struct) e oferece ao usuário
// funcionalidades para:
// a) Procurar o veículo com a maior quilometragem.
// b) Troque o veículo com a maior quilometragem com o da primeira posição.
// c) Imprima a lista de quilometragens após a troca.
// Cada uma dessas etapas deve ser implementada em funções ou procedimentos separados.

#include <stdio.h>
#include <stdlib.h>

struct Veiculo {
    int id;
    float quilometragem;
};

struct Veiculo maiorQuilometragem (struct Veiculo veiculos[], int tamanho) {

    struct Veiculo veiculoQuilometragem;
    float quilometragem;

    veiculoQuilometragem = veiculos[0];
    quilometragem = veiculos[0].quilometragem;

    for(int i = 1; i < tamanho; i++) {
        if(veiculos[i].quilometragem > quilometragem) {
            quilometragem = veiculos[i].quilometragem;
            veiculoQuilometragem = veiculos[i];
        }
    }

    return veiculoQuilometragem;

}

void trocarElementos (struct Veiculo veiculos[], int tamanho, struct Veiculo maiorKm) {

    int posicao;
    struct Veiculo temp = veiculos[0];

    for(int i = 0; i < tamanho; i++) {
        if(veiculos[i].quilometragem == maiorKm.quilometragem) {
            posicao = i;
        }
    }

    veiculos[posicao] = veiculos[0];
    veiculos[0] = maiorKm;

    printf("Troca realizada.\n");
}

void imprimirListaQuilometragem(struct Veiculo veiculos[]) {
    printf("Lista de quilometragens:\n");
    for(int i = 0; i < 5; i++) {
        printf("Posicao %d: %.2f\n", i + 1, veiculos[i].quilometragem);
    }
}

int main() {

    struct Veiculo veiculos[5];
    int tamanho = 5;

    printf("Preencha os veiculos:\n");

    for(int i = 0; i < tamanho; i++) {
        printf("Veiculo %d:\n", i + 1);
        veiculos[i].id = i + 1;
        scanf("%f", &veiculos[i].quilometragem);
    }

    trocarElementos(veiculos, tamanho, maiorQuilometragem(veiculos, tamanho));
    imprimirListaQuilometragem(veiculos);

    return 0;

}