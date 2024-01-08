#include <stdio.h>

void thapPhanSangNhiPhan(long thapPhan, char *nhiPhan) {
    int index = 0;

    while (thapPhan > 0) {
        nhiPhan[index++] = (thapPhan % 2) + '0';
        thapPhan /= 2;
    }

    nhiPhan[index] = '\0';

    for (int i = 0, j = index - 1; i < j; i++, j--) {
        char temp = nhiPhan[i];
        nhiPhan[i] = nhiPhan[j];
        nhiPhan[j] = temp;
    }
}

int main() {
    long thapPhanInput;
    char nhiPhanResult[20]; 
    printf("Enter decimal number: ");
    scanf("%ld", &thapPhanInput);

    thapPhanSangNhiPhan(thapPhanInput, nhiPhanResult);

    printf("Binary number: %s\n", nhiPhanResult);

    return 0;
}
