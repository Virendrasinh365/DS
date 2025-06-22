//15. WAP to print Armstrong number from 1 to 1000
#include <stdio.h>
int isArmstrong(int num);
void main(){

    int i;

    printf("Armstrong numbers from 1 to 1000:\n");//
    for (i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

}
int isArmstrong(int num) {
    int originalNum = num, sum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit; // Cubing the digit
        num /= 10;
    }

    return (sum == originalNum);
}