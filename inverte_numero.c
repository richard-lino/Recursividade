
/*função recursiva que permita inverter um número inteiro N. Ex:123 - 321*/

#include <stdio.h>
#include <string.h>

void inverterPalavra(char palavra[], int inicio, int fim) {
    // Caso base: quando a posição inicial é maior ou igual à posição final
    if (inicio >= fim) {
        return;
    }
    // Troca os caracteres nas posições inicio e fim
    char temp = palavra[inicio];
    palavra[inicio] = palavra[fim];
    palavra[fim] = temp;
    // Chama recursivamente a função com as posições atualizadas
    inverterPalavra(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    inverterPalavra(palavra, 0, tamanho - 1);

    printf("A palavra invertida é: %s\n", palavra);

    return 0;
}


