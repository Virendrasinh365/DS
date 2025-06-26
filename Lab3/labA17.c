//17. Write a program to calculate sum of numbers from m to n.
#include<stdio.h>
void main(){
     int n,m,sum=0;
    printf("Enter N :- ");
    scanf("%d",&n);
     printf("Enter M :- ");
    scanf("%d",&m);
    for(int i=n;i<=m;i++){
        sum+=i;
    }
    printf("Answer is :- %d ",sum);
}