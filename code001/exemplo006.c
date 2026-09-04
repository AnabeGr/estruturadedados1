#include <stdio.h>

void zerar(int vetor[], int tamanho){
    int i;
    for(i = 0; i<tamanho; i++){
        vetor [i] = 0;
    }
}

void imprimir(int vetor[], int tamanho){
    int i;
    for(i = 0; i<tamanho; i++){
        printf("[%d]: %d\n", i, vetor[i]);
    }
}

        

int main(){
    int array[] = {10,20,30,40,50};
    printf("Array na posicao 2 (antes): %d\n", array[2]);
    printf("Array na posicao 4 (antes): %d\n", array[4]);
    imprimir (array, 5);
    zerar(array, 5);
    //imprimir
    printf("Array na posicao 2 (depois): %d\n", array[2]);
    printf("Array na posicao 4 (depois): %d\n", array[4]);
    imprimir (array, 5);

    return 0;
}