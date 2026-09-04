#include <stdio.h>
#include "util.h"

int num1, num2, maior;

int maximo(int a, int b){
    if (a > b) return a;
    return b;
}

int main(){
    printf("digite dois numeros\n");
    scanf("%d %d", &num1, &num2);
    maior = maximo(num1, num2);
    printf("o numero maior eh %d\n", maior);
    return 0;

}