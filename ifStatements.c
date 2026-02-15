#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    }else{
        result = num2;
    }
    return result;
}

int main(){
    int num = max(4,7);
    printf("Largest num is %d", num);
    return 0;
}