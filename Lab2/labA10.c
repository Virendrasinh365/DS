//10. WAP to reverse a number.
#include<stdio.h>
void main(){
    int a,ans=0;
    printf("enter a number a  :- ");
    scanf("%d",&a);
    while(a>0){
        ans = ans*10 + a%10;
        a/=10;

    }
    printf("Reverse Number is %d :- ",ans);
}           
