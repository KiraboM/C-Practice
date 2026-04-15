#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fptr;
    fptr = fopen("newFile.txt", "w");

    fputs("I Hate C Programming\n", fptr);
    fputs("I Love Java\n", fptr);
    
    /* if(fptr != NULL){
        while(fgets(content, 1000, fptr)){
            printf("File content: %s", content);
        }
    }else{
        printf("File open Unsuccessful");
    } */
    fclose(fptr);
}