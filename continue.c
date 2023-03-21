#include <stdio.h>

int main(){
    printf("Los números impares son:\n");
    for(int i=0; i < 20; i++){
        if(i%2 == 0)
            continue;    
        printf("El número es: %d\n", i);
    }
    return 0;
}
