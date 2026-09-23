#include <stdio.h>

int calcula_potencia(int base, int exp) {
    if (exp <= 0) { // caso base
        return 1; 
    }
    return base * calcula_potencia(base, exp - 1);// passo recursivo
}

int main() {
    int n, m;

    printf("Digite dois numeros inteiros (base e expoente):\n");
    scanf("%d %d", &n, &m);

    int r = calcula_potencia(n, m);

    printf("%d elevado a %d => %d\n", n, m, r);

    return 0;
}