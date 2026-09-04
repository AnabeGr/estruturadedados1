#include <stdio.h>

void funcaoA(int a){
    printf("FA: ENDERECO DA VARIAVEL A %p\n", &a);
    printf("FA: valor de A (antes) = %d\n", a);
    a = a * 10;
    printf("FA: valor de A (depois) = %d\n", a);
}

void funcaoB(int *p){
    printf("FB: ENDEREÇO DE P = %p\n", p);
    printf("FB: valor de *p (antes) = %d\n", *p);
    *p = *p * 100;
    printf("FB: valor de *p (depois) = %d\n", *p);
}

int main(){
    int a = 20;
    printf("MAIN: ENDERECO DA VARIAVEL A %p\n", &a);
    printf("MAIN: valor de A (antes) = %d\n", a);
    funcaoA(a);
    printf("MAIN: valor de A (depois) = %d\n", a);
    printf("------------------------------------\n");
    printf("MAIN: ENDERECO DA VARIAVEL A %p\n", &a);
    funcaoB(&a); //usa &a porque está chamando o endereço de a
    printf("MAIN: valor de A (depois) = %d\n", a);
    
    return 0;
}