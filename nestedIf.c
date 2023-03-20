#include <stdio.h>
int opt1 = 0;
int opt2 = 1;
int opt3 = 2;

int main(){
    // Menu for choose what you want
    printf("Bienvenido a nuestra tienda\n");
    printf("Presione 0 para tener nuestras bebidas\n");
    printf("Presione 1 para tener nuestras comidas\n");
    if(opt1 == 0){
        printf("Usted entro a nuestro menu de bebidas\n");
        printf("Presione 0 para tener nuestra primera bebida\n");
        printf("Presione 1 para tener nuestra segunda bebida\n");
        if(opt2 == 1)
            printf("Usted ha escogido nuestra segunda bebida\n");
        else if(opt3 == 2)
            printf("Usted ha escogido nuestra tercera bebida\n");
        else
            printf("Error\n");
    }
    if(opt1 == 1){
        printf("Usted entro a nuestro menu de comidas\n");
        printf("Presione 0 para tener nuestra primera comida\n");
        printf("Presione 1 para tener nuestra segunda comida\n");
        if(opt2 == 1)
            printf("Usted ha escogido nuestra 1ra comida\n");
        else if(opt3 == 2)
            printf("Usted ha escogido nuestra 2da comida\n");
        else
            printf("Error\n");
    }
    return 0;
}
