/*função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34, 55, 89...*/

#include <stdio.h>

int fibonacci(int n) {
    // Casos base: os dois primeiros termos da sequência Fibonacci são 0 e 1.
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Para termos maiores que 1, calculamos recursivamente os termos anteriores e os somamos.
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite o valor de N para calcular o N-ésimo termo da sequência Fibonacci: ");
    scanf("%d", &n);

    // Chamada da função fibonacci para calcular o N-ésimo termo.
    int resultado = fibonacci(n);
    printf("O %d-ésimo termo da sequência Fibonacci é: %d\n", n, resultado);

    return 0;
}






