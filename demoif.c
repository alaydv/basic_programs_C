#include <stdio.h>

int n = 21;

int main(){
    if(n > 10 && n < 20)
        printf("El número es mayor que diez, pero menor que veinte");
    else if(n==10)
        printf("El número es igual a diez");
    else if(n > 20)
        printf("El número es mayor que veinte");
    else
        printf("El número es menor que 10");
    return 0;
}
