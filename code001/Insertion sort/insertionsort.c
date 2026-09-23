#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//assinatura das funções
void imprimir (int vetor[], int n);
void insertion_sort(int A[], int n);
void preencher_aleatorio(int vetor[], int n);



int main(){
    int v[5];
    preencher_aleatorio(v, 5); // 5 elementos
    printf("Desordenado\n");
    imprimir(v,5);
    insertion_sort(v, 5);
    printf("Ordenado\n");
    imprimir(v, 5);
    return 0;
}

void imprimir(int vetor[], int n){
    int i;
    for (i=0; i<n; i++)
    {
        printf("%d->\n",vetor[i]);
    }
    printf("\n");
}
    void insertion_sort(int A[], int n){
        int i;
        for (i=1;i<n;i++){
            int x= A[i];
            int j= i-1;
            //imprimir(A, n);
            while (j>=0&&A[j]>x){
                A[j+1]= A[j]; //movimentando elementos
                j= j-1;
                //imprimir(A, n);
            }
            A[j+1]=x;
        }
    }

void preencher_aleatorio(int vetor[], int n){
    int i;
    srand(time(NULL));
    for (i = 0; i<n; i++){
        vetor[i] = rand()%10000000;
        // se eu quiser colocar entre um numero e outro, coloca ex: 300+rand()%400 -> fica entre 300 e 400
        printf("\n");
    }
}
