/* 8. WAP to find factorial of a number. (Using loop & recursion) */
#include<stdio.h>
int fact(int x);
void main(){
    int num,ans=1;
    printf("Enter A Number :-  ");
    scanf("%d",&num);
    /* by looop */
    // while(num>0){
    //     ans *=num;
    //     num--;
    //  }

    /* by recursion */
ans = fact(num);
     printf("Factorial of is :-  %d ",ans);
}
int fact(int x){
    if (x==1){
        return x;

    }
    return x*fact(x-1);

}c:\Users\Dell\OneDrive\Desktop\RS_AGARWAL.pdf