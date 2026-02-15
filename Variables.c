#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[] = "George";
    int age = 70;

    printf("There was once a man named %s\n", name);
    printf("He was %d years old.\n", age);    
    age = 50;
    printf("He really liked the name %s\n", name);
    printf("He did not like being %d\n", age);

    return 0;
}