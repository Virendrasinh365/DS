// 14. WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ ...+(1+2+3+4+....+n)
#include<stdio.h>
void main(){
    int n,ans=0;
    printf("Enter a Number :- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            ans+=j;
        }
    }
    printf("Answer is :- %d ",ans);

}