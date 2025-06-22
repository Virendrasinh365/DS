/*7. WAP  to  convert number  of  days  into  year, week  &  days  [e.g.  375  days mean  1 
year, 1 week and 3 days].*/
#include<stdio.h>
int main(){
    int intialDays,days,week,year;
    printf("Enter A Days : -");
    scanf("%d",&days);

    intialDays = days;
    year = (days/365);
    days = days%365;
    week = (days/7);
    days = days%7;

        printf("%d days mean %d : %d : %d (%d year, %d month , %d days)",intialDays,year,week,days,year,week,days);
    return 0;
    }