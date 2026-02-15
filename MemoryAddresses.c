#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    //Print the memory addresses of these variables
    printf("%p", &age);
    return 0;
}