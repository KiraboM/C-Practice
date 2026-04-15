#include <stdio.h>
#include <stdlib.h>

int count = 1;

void *functionCount1(){
    for(;;){
        pthread_mutex_lock(&count_mutex);
        count++;
        printf("Counter value functionCount1: %d\n", count);
    }
}