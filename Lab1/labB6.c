/* 6. WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS 
 [e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)]. */

 #include<stdio.h>
 void main(){
    int hour , min,sec;
    printf("Enter a Seconds :- ");
    scanf("%d",&sec);
    int initialSeconds = sec;
    hour = (sec/3600);
    sec = sec%3600;
    min = (sec/60);
    sec = sec%60;

    printf("%d seconds mean %d : %d : %d (%d Hours, %d Minutes , %d Seconds)",initialSeconds,hour,min,sec,hour,min,sec);
 }
