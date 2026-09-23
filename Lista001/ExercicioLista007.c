#include <stdio.h>

// Funcao recursiva para contar ocorrencias de x no vetor
int contar_ocorrencias(int v[], int n, int x) {
    // Caso-base: vetor vazio ou fim dos elementos a verificar
    if (n == 0) {
        return 0;
    }

    // Passo recursivo: verifica o ultimo elemento e soma com o restante
    if (v[n - 1] == x) {
        return 1 + contar_ocorrencias(v, n - 1, x);
    } else {
        return contar_ocorrencias(v, n - 1, x);
    }
}

int main() {
    int n, x;

    printf("Digite o tamanho do vetor (n): ");
    scanf("%d", &n);

    int v[n];
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite o valor a ser procurado (x): ");
    scanf("%d", &x);

    int total = contar_ocorrencias(v, n, x);
    printf("O valor %d aparece %d vez(es) no vetor.\n", x, total);

    return 0;
}