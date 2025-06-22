// 4. WAP to find the largest among the given three numbers by user. 
#include <stdio.h>
int main() {
    double num1, num2, num3;

    
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Assume the first number is the largest
    double largest = num1;

    // Compare with the second number
    if (num2 > largest) {
        largest = num2;
    }

    // Compare with the third number
    if (num3 > largest) {
        largest = num3;
    }

    // Output the largest number
    printf("The largest number is: %.2lf\n", largest);

    return 0;
}
