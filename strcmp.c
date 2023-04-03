#include <stdio.h>
#include <string.h>

int main(){
    char str1[60], str2[60];
    printf("*****Comparador de strings*****\n\n");
    printf("Ingresa una frase a comparar: ");
    fgets(str1, 60, stdin);
    printf("Ingresa otra frase: ");
    fgets(str2, 60, stdin);

    if(strcmp(str1, str2)==0){
        printf("Los strings son iguales\n");
        printf("%s \n%s", str1, str2);
    } else {
        printf("Los strings son diferentes\n");
        printf("%s \n%s", str1, str2);
    }

    return 0;
}
