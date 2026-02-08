#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buffer = NULL;
    size_t bufsize = 0;
    ssize_t characters;

    printf("Starting Mini-Shell... (Type 'exit' to stop)\n");

    // The Infinite Loop (The Heart of the Shell)
    while (1) {
        printf("myshell> "); // Print the prompt
        
        // 1. READ: Get input from user
        characters = getline(&buffer, &bufsize, stdin);
        
        // Handle empty input or errors (like Ctrl+D)
        if (characters == -1) {
            printf("\nExiting...\n");
            break;
        }

        // 2. PRINT: For today, just prove we got it
        printf("You typed: %s", buffer);
        
        // (Optional: Simple exit command)
        // Note: getline keeps the newline '\n', so we check roughly
        // In the future, we will 'tokenize' this to remove whitespace.
    }

    // Clean up memory (Good C practice!)
    free(buffer);
    return 0;
}