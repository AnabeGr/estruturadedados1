#include <stdio.h>
#include <string.h>

int soma(int vetor[], int tamanho, int i){
    if (i == tamanho){// caso base
        return 0;
    } 
    return vetor[i] + soma(vetor, tamanho, i+1);// passo recursivo
}

int main(){
    char numeroStr[50];

    printf("Digite um numero positivo:\n");
    scanf("%s", numeroStr);

    int tamanho = strlen(numeroStr);
    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = numeroStr[i] - '0';
    }
    int resultado = soma(vetor, tamanho, 0);

    printf("A soma dos dígitos de %s eh: %d\n", numeroStr, resultado);

    return 0;
}
