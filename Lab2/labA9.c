// 9. WAP to find power of a number using loop.
#include<stdio.h>
void main(){
    int a ,b;
    printf("Enter A number a :- ");
    scanf("%d",&a);
    printf("Enter a Power b :- ");
    scanf("%d",&b);
    int ans =1;
    for(int i=0;i<b;i++){
        ans*=a;

    }
    printf("Ans of %d Rest to %d :- %d",a,b,ans);
}