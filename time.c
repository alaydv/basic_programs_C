#include <stdio.h>
#include <time.h>

time_t sec;

int main(){
    
    sec = time(NULL);
    printf("Este es el tiempo trancurrido desde el EPOCH time: %ld \n", sec/3600);

    return 0;
}
