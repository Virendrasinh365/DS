// 16. Write a program to read and display n numbers using an array
#include<stdio.h>
void main(){
    int n;
    printf("Enter a size of an Array :- ");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("Enter a element of a[%d] : -",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("Element of a[%d] is %d \n:- ",i+1,a[i]);
    }
}