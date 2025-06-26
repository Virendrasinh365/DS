// 18. Write a program to calculate average of first n numbers.
#include<stdio.h>
void main(){
    int m,sum=0;
    
     printf("Enter M :- ");
    scanf("%d",&m);
    for(int i=0;i<=m;i++){
        sum+=i;
    }
    float avg = (float)(sum)/m;
    printf("Answer is :- %f ",avg);
}