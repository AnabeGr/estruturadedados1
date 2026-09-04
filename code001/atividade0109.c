#include <stdio.h>

int f(int n){
    if (n==0){
        return 1;
    
    }
    return 2 * f(n-1);
}

int main (){
    printf("%d\n", f(4));
}