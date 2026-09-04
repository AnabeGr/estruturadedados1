#include <stdio.h>

int soma(int x, int y){
    return x + y;

}
int main(){
    //processamento
    int a = 10;
    int b = 30;
    int r = soma(a, b);
    printf("resultado da soma %d + %d = %d\n", a, b, r);

    return 0;
}