#include <stdio.h>

int fatorial(int i) {
    if (i <= 1) {//caso base
        return 1;
    }
    return i * fatorial(i - 1);// passo recursivo
}

int main() {
    int n;
    printf("Digite um numero maior que zero:\n");
    scanf("%d", &n);
    int r = fatorial(n);
    printf("i=%d\t=>%d\n", n, r);

    return 0;
}