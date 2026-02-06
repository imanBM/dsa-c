#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "SOUTHSIDE SOUTHside southside....uhhhhhhhhh!";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;

    }

    fprintf(pFile,"%s", text);

    printf("File was written successfully\n");

    fclose(pFile);

    return 0;
}