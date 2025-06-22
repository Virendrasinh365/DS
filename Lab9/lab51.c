#include<stdio.h>
#include<stdlib.h>
int Sum(int *ptr,int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }
    return sum;
     
}

int main(){
    int  *ptr;
    int size;
    printf("Enter a size of array:-");
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

   int ans= Sum(ptr  , size);
   printf("Ans is :- %d",ans);
    free(ptr); 
    ptr = NULL;
    

}