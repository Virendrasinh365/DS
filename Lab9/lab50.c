// WAP to get and print the array elements using Pointer
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int)); 
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }

        printf("The elements in the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr); 
    ptr = NULL;
    printf("Memory freed and pointer set to NULL\n");

    return 0; 
}