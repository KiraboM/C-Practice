#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[20];

    printf("Please enter your name\n");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    return 0;
}