// 1. WAP to calculate area of a Circle (A = πr2).
#include<stdio.h>
#define PI 3.14159
int main(){
    double rad ;
    printf("Enter a Radius (r): -");
    scanf("%lf", &rad);
    double area = PI * rad * rad;
    printf("Area of Circle with radius %.2lf is %.2lf\n", rad, area);
    return 0;
}