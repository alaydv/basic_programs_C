#include <stdio.h>
#include <stdlib.h>

int binaryNum[12], n, i;

int main(){
    
    system("clear || cls");
    system("color 42");
    printf("Conversor a binario\n");
    printf("*****************************************\n");
    printf("Escribe tu número a transformar: ");
    scanf("%d", &n);

    for(i=0; n>0; i++){
        binaryNum[i] = n%2;
        n = n/2;
    }

    printf("El número en decimal es: ");
    for(i=i-1; i>=0; i--){
        printf("%d", binaryNum[i]);
    }

    return 0;
}
