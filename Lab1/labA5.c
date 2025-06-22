// 5. WAP to check for the leap year. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int year;
    printf("Enter a year : - ");
    scanf("%d",&year);
    if(year%400==0 || (year%4==0 && year%100 !=0) ){
        printf("%d is a Leap year .",year);

    }else{
        printf("%d is not a leap year .",year);
    }
 
    return 0;
}