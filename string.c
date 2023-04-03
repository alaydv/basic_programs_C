#include <stdio.h>
#include <string.h>

int main(){

    char string1[60];
    printf("Ecribe una frase: ");
    fgets(string1, 60, stdin);

    //strrev(string1);
    printf("\nEl string es: %s", string1);

    return 0;
}
