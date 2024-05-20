/*função recursiva que permita somar os elementos de um vetor de inteiros*/

#include <stdio.h>

int somarElementos(int vetor[], int tamanho) {
    // Caso base: quando o tamanho do vetor é 0, retorna 0
    if (tamanho == 0) {
        return 0;
    }
    // Chamada recursiva para somar os elementos do vetor, excluindo o primeiro elemento
    // e somando-o ao restante dos elementos
    return vetor[0] + somarElementos(&vetor[1], tamanho - 1);
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int soma = somarElementos(vetor, tamanho);

    printf("A soma dos elementos do vetor é: %d\n", soma);

    return 0;
}

