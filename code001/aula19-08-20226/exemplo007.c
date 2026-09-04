#include <stdio.h>
#include <assert.h>

int main (){
    int n;
    printf("digite um numero inteiro:\n");
    scanf("%d", &n);

    assert(n>=0);
    printf("O numero %d eh maior que zero. Passou no teste!\n");
    return 0;
}