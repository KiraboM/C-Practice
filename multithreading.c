#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int a = 0;

void *add(void *var){
    int *id = (int *) a;
    static int b = 0;

    a = a + 1;
    b = b + 1;
    sleep(2);
    printf("The value of a is %d", a);
    printf("The value of b is %d", b);
    printf("The value of id is %d", id);
}


int main(){
    pthread_t t1;
    pthread_t t2;
    printf("Before threading\n");
    for(int i = 0; i < 20; i++){
        pthread_create(&t1, NULL, add, NULL);
        pthread_create(&t2, NULL, add, NULL);
        pthread_join(t1, NULL);
        pthread_join(t2, NULL);
    }
    return 0;
}