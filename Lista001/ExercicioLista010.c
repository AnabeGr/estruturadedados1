#include <stdio.h>

// Funcao recursiva para inverter os elementos do vetor
void inverter_vetor(int v[], int inicio, int fim) {
    // Caso-base: os ponteiros se cruzaram ou chegaram ao meio
    if (inicio >= fim) {
        return;
    }

    int temp = v[inicio];
    v[inicio] = v[fim];
    v[fim] = temp;

    // Passo recursivo: aproxima os extremos para o centro
    inverter_vetor(v, inicio + 1, fim - 1);
}

int main() {
    int n;

    printf("Digite o tamanho do vetor (n): ");
    scanf("%d", &n);

    int v[n];
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    inverter_vetor(v, 0, n - 1);

    printf("Vetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}