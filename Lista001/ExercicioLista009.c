#include <stdio.h>
#include <string.h>

// Funcao recursiva para verificar se uma string e palindromo
int eh_palindromo(char str[], int inicio, int fim) {
    // Caso-base 1: indices se cruzaram ou se igualaram (palindromo confirmado)
    if (inicio >= fim) {
        return 1;
    }

    // Caso-base 2: caracteres opostos sao diferentes (nao e palindromo)
    if (str[inicio] != str[fim]) {
        return 0;
    }

    // Passo recursivo: avanca o inicio e recua o fim
    return eh_palindromo(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];

    printf("Digite uma palavra (sem espacos): ");
    scanf("%s", str);

    int tamanho = strlen(str);

    if (eh_palindromo(str, 0, tamanho - 1)) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}