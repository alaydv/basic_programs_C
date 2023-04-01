#include <stdio.h>
#include <math.h>

int main(){
    int x;
    float result;

    printf("Ingresa un número: ");
    scanf("%d", &x);
    result = cos(x*M_PI/180);
    printf("\nEl sin de tu número es: %f", result);
    return 0;
}
