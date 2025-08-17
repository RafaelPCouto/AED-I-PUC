#include<stdio.h>
#include<math.h>

int main () {

    float x1, y1, x2, y2;
    double distanciaEuclidiana;

    printf("Insira o primeiro ponto cartesiano:\n");
    scanf("%f %f", &x1, &y1);

    printf("Insira o segundo ponto cartesiano:\n");
    scanf("%f %f", &x2, &y2);

    distanciaEuclidiana = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia euclidiana entre os pontos (%.2f, %.2f) e (%.2f, %.2f): %lf", x1, y1, x2, y2, distanciaEuclidiana);


    return 0;

}