#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t fuel_mutex;
int fuel = 0;

void *fuelFilling(void *arg){
    printf("Filling fuel\n");
}

void *car(void *arg){
    prinf("Here to get fuel\n");
}
int main(){
    //Creating and running two threads
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t1, NULL, &fuelFilling, NULL);
    pthread_create(&t2, NULL, &fuelFilling, NULL);
    //Joining threads
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_mutex_destroy(&fuel_mutex);
    return 0;
}