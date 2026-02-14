#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter No. of grades: ");
    scanf("%d", &number);

    char *grades = malloc(sizeof(char) * number);

    for(int i = 0;i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);

    }

    for(int i = 0; i < number; i++){
        printf("Grade #%d is %c\n", i +1, grades[i]);
    }

    if(grades == NULL){
        printf("Failed");

        return 1;
    }

    free(grades);
    grades = NULL;

    return 0;
}