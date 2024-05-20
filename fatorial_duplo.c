/*A função fatorial duplo é definida como o produto de todos os números naturais ı́mpares de 1 até algum número natural ı́mpar N. Assim, o fatorial
duplo de 5 é 5!! = 1 ∗ 3 ∗ 5 = 15. Faça uma função recursiva que receba um número inteiro positivo ı́mpar N e retorne o fatorial duplo desse número*/

#include <stdio.h>

int fatorialDuplo(int n) {
    // Caso base: se n for 1, retorna 1
    if (n == 1) {
        return 1;
    }
    // Chama recursivamente a função com n-2, pois estamos interessados apenas nos números ímpares
    return n * fatorialDuplo(n - 2);
}

int main() {
    int n;
    printf("Digite um número inteiro positivo ímpar: ");
    scanf("%d", &n);

    // Verifica se o número é ímpar
    if (n % 2 == 0) {
        printf("O número digitado não é ímpar.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Calcula e imprime o fatorial duplo
    int resultado = fatorialDuplo(n);
    printf("O fatorial duplo de %d é: %d\n", n, resultado);

    return 0;
}

