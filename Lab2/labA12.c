//12. WAP to check whether a number is prime or not.
#include<stdio.h>
void main(){
    int n;
    printf("ENter a number :- ");
    scanf("%d",&n);
    int count=0;
    for(int i =2;i<=(n/2);i++){
        if (n%i==0)
        {
            count++;

        }
             
    }
    if(count!=0)
        {
            printf("Given number is Not prime !");
        }else{
            printf("Given numbr is PRIME :");
        }
}