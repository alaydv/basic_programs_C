#include <stdio.h>

int num = 0;

int main(){
    do{
        printf("The number is: %d\n", num);
        num++;
    }while(num < 10);
    printf("This is the final of the loop");
    return 0;
}
