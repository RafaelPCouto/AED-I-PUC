/*Quest ̃ao 2) Implemente um procedimento que receba e preencha um vetor com as notas de uma
turma de 15 alunos. Depois, crie uma fun ̧c ̃ao que receba este vetor e retorne a maior nota. Crie
outro procedimento que receba o vetor e a maior nota, calcule e exiba a nota de cada aluno como
um percentual em rela ̧c ̃ao `a maior nota (Ex: se a maior nota for 10 e um aluno tirou 7, ele atingiu
70% da nota m ́axima). O programa principal (main) deve orquestrar a chamada a esses m ́odulos. As
assinaturas podem ser:
• void preencheNotas(float notas[], int tam);
• float encontraMaiorNota(float notas[], int tam);
• void exibePercentuais(float notas[], int tam, float maiorNota);*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void preencherNotas(int tam, float vetorNotas[]) {

    int i;

    for(i = 0; i < tam; i++) {
        vetorNotas[i] = rand() % 10;
    }

}

float maiorNota(int tam, float vetorNotas[]) {
    float maiorNota = vetorNotas[0];
    int i = 0;

    for(i = 1; i < tam; i++) {
        if(vetorNotas[i] > maiorNota) {
            maiorNota = vetorNotas[i];
        }
    }

    return maiorNota;

}

void exibePercentuais(float notas[], int tam, float maiorNota) {

    int i = 0;
    float percentualNota;

    for(i = 0; i < tam; i++) {
        percentualNota = (notas[i] * 100) / maiorNota;
        printf("%.2f\n", percentualNota);
    }

}

int main() {

    int tam = 15;
    float vetorNotas[tam], maiorN;

    srand(time(NULL));

    preencherNotas(tam, vetorNotas);
    maiorN = maiorNota(tam, vetorNotas);
    exibePercentuais(vetorNotas, tam, maiorN);

}