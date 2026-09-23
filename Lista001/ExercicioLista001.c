#include <stdio.h>

int soma(int i) {
    if (i <= 0) { // caso base
        return 0;
    }
    return i + soma(i - 1); // passo recursivo
}

int main() {
    int n;
    printf("Digite um numero maior que zero:\n");
    scanf("%d", &n);
    int r = soma(n);
    printf("i=%d\t=>%d\n", n, r);

    return 0;
}