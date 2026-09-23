#include <stdio.h>

// Funcao recursiva para calcular o MDC usando o algoritmo de Euclides
int mdc(int a, int b) {
    // Caso-base: quando o divisor b chega a 0, o MDC e a
    if (b == 0) {
        return a;
    }
    // Passo recursivo: chama mdc com (b, resto da divisao de a por b)
    return mdc(b, a % b);
}

int main() {
    int a, b;

    printf("Digite dois numeros inteiros positivos (a e b): ");
    scanf("%d %d", &a, &b);

    int resultado = mdc(a, b);
    printf("MDC(%d, %d) = %d\n", a, b, resultado);

    return 0;
}