#include <stdio.h>

// Funcao recursiva para somar os elementos do vetor
int soma_vetor(int v[], int n) {
    // Caso-base: vetor sem elementos restantes
    if (n == 0) {
        return 0;
    }

    // Passo recursivo: elemento atual + soma do restante do vetor
    return v[n - 1] + soma_vetor(v, n - 1);
}

int main() {
    int n;

    printf("Digite a quantidade de elementos do vetor (n): ");
    scanf("%d", &n);

    int v[n];
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int soma = soma_vetor(v, n);
    printf("Soma dos elementos = %d\n", soma);

    return 0;
}