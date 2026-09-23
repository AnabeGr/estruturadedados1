#include <stdio.h>
#include <string.h>


int contagem(int vetor[], int tamanho, int i){
    if (i == tamanho){
        return 0;
    }
    return 1 + contagem(vetor, tamanho, i + 1);
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
    int totalDigitos = contagem(vetor, tamanho, 0);

    printf("O numero %s possui %d digito(s)\n", numeroStr, totalDigitos);

    return 0;
}