#include <stdio.h>

int opt1 = 0;

int main(){

    printf("Bienvenido a Platzi Store:\n");
    printf("Opción 0 para bebidas\n");
    printf("Opción 1 para comida\n");
    printf("Opción 2 para postres\n");
    printf("-----------------------------\n");

    switch (opt1){
        case 0:
            printf("Usted a entrado en nuestro menú de bebidas\n");
            printf("Opción 0 para gaseosas\n");
            printf("Opción 1 para jugos\n");
            printf("Opción 2 para agua\n");
            break;
        case 1:
            printf("Usted a entrado en nuestro menú de comida\n");
            printf("Opción 0 para comida casera\n");
            printf("Opción 1 para comida de mar\n");
            printf("Opción 2 para comida rural\n");
            break;
        case 2:
            printf("Usted a entrado en nuestro menú de postres\n");
            printf("Opción 0 para pasteles\n");
            printf("Opción 1 para frutas\n");
            printf("Opción 2 para dulces\n");
            break;
        default:
            printf("This is the default value, ningún valor aceptado");
            break;
    }
    return 0; 
}
