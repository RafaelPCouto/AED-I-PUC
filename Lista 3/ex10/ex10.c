// 10. Considere os algoritmos abaixo e responda:
// Algoritmo 1 
// int count = 0;
// int i;
// for (i=0; i<n; i++)
// if (i%2 == 1)
// count++;

// Algoritmo 2
// for (int i=1;i<=n;i*=2)
// if (i%2 == 0)
// printf(“Olá”);

// a) Algoritmo 1: Calcule o valor final da variável count considerando n = 7
// b) Algoritmo 2: Calcule o número de vezes que o texto “Olá” será impresso considerando n = 12
// Para cada um dos algoritmos
// c) Calcule o número de operações de:
// - Declaração de Variáveis
// - Atribuições
// d) Calcule o número de operações em função de n para cada um dos algoritmos:
// - Comparação "menor que"
// - Comparação "igual a"
// - Incremento no melhor caso
// - Incremento no pior caso

/*Respostas:*/

/*Algoritmo 1:
    valor final = 3
    Declarações = 2 (count e i)
    atribuições = 18

    menor que: f(n) = n + 1
    igual a f(n) = n
    incremento melhor caso: 0
    incremento pior caso: n/2

*/

/*Algoritmo 2:
    Olá é impresso 3 vezes
    declarações = 3
    atribuições = 5

    menor que: f(n) = lg(n) + 1
    igual a: f(n) - lg(n) +1
    incremento melhor caso: 1
    incremento pior caso: lg(n) + 1
*/