#include <stdio.h>

int funcaoA(){
    printf("funcao A em execucao\n");
}
int funcaoB(){
    funcaoA();
    printf("funcao B em execucao\n");
}
int main(){
    printf("inicio main\n");
    funcaoB();
    printf("fim main\n");
}
