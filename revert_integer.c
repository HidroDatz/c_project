#include <stdio.h>

int reverseInteger(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;

        reversedNumber = reversedNumber * 10 + digit;

        number /= 10;
    }

    return reversedNumber;
}

int main() {
    int inputNumber;

    printf("Enter an integer: ");
    scanf("%d", &inputNumber);

    printf("Reversed integer: %d\n", reverseInteger(inputNumber));

    return 0;
}
