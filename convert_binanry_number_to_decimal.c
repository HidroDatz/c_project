#include <stdio.h>

long chuyenNhiPhanSangThapPhan(char *nhiPhan) {
    long soThapPhan = 0;
    int i = 0;

    while (nhiPhan[i] != '\0') {
        i++;
    }

    for (int j = i - 1, coSo = 1; j >= 0; j--, coSo *= 2) {
        if (nhiPhan[j] == '1') {
            soThapPhan += coSo;
        }
    }

    return soThapPhan;
}

int main() {
    char nhiPhanInput[20]; 
    long ketQuaThapPhan;

    printf("Enter binary number: ");
    scanf("%s", nhiPhanInput);

    ketQuaThapPhan = chuyenNhiPhanSangThapPhan(nhiPhanInput);

    printf("Decimal number: %ld\n", ketQuaThapPhan);

    return 0;
}
