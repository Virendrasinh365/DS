#include<stdio.h>
#include<stdlib.h>
void main() {
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int)); // Allocate memory for 10 integers
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return; // Exit if memory allocation fails
    }   
    for (int i = 0; i < 10; i++) {
        ptr[i] = i + 1; // Initialize the allocated memory
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]); // Print the values stored in the allocated memory
    }
    printf("\n");
    free(ptr); // Free the allocated memory
    ptr = NULL; // Set pointer to NULL after freeing memory
    printf("Memory freed and pointer set to NULL\n");
    return; // Exit the program

    
}