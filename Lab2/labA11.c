// 11. WAP to find factors of a given number.
#include<stdio.h>
int fact(int x);
int main(){
    int n;
    printf("Enter A Number(n) :- ");
    scanf("%d",&n);
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            printf("%d ,", i);
        }
    }

    return 0;
}
