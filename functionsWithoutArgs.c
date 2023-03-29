#include <stdio.h>

int add(int a, int b);

int main(){
    
    printf("El resultado es: %d", add(200, 200));
    return 0;
}

int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}
