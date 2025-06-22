#include<stdio.h>
void main(){
    int a ,b,j;
    printf("Enter a number A :- ");
    scanf("%d",&a);
    printf("Enter a number b :- ");
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        int count=0;
        if(i<2){
            continue;
        }
            for(j =2;j<=(i/2);j++)
            {
            if (i%j==0)
            {
                count++;
                break;
            }    
            }
        if(count==0)
            {
                printf("%d,",i);
            }
    }

}