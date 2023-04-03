#include <stdio.h>
#include <time.h>

time_t start, end;

int main(){
    
    start = time(NULL);
    for(int i=0; i<1000000000; i++);
    end = time(NULL);

    printf("Han transcurrido %f segundos", difftime(end, start));

    return 0;
}
