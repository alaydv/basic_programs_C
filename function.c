#include <stdio.h>

int power(int m, int n);

int main(){
    
    for(int i=0; i<10; i++){
        printf("El exponente n = %d, es igual a = %d\n", i, power(2,i));
    }
    return 0;
}

int power(int m, int n){
    int p = 1;
    for(int i=1; i<=n; i++){
        p = p * m;
    }
    return p;
}
