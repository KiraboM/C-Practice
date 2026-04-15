#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *computation();

void *computation(){
    printf("Computation\n");
    return NULL;
}

int main(){

    pthread_t thread1;

    pthread_create(&thread1, NULL, computation, NULL);

    pthread_join(thread1, NULL);
    return 0;
}
