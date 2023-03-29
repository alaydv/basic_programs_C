#include <stdio.h>

void nameWrite(char name[20]);

int main(){
    char name1[20];
    printf("Ingresa tu nombre: ");
    scanf("%s", name1);
    nameWrite(name1);
}

void nameWrite(char name[20]){
    printf("Tu nombre es: %s", name);
}
