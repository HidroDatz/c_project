#include <stdio.h>

int countDigits(int number) {
    int count = 0;

    if (number < 0) {
        number = -number;
    }

    do {
        count++;
        number /= 10;
    } while (number != 0);

    return count;
}

int main() {
    int inputNumber;

    printf("Enter an integer: ");
    scanf("%d", &inputNumber);

    printf("Number of digits: %d\n", countDigits(inputNumber));

    return 0;
}
