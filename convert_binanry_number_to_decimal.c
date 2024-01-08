#include <stdio.h>

// Hàm chuyển đổi từ nhị phân sang thập phân
long chuyenNhiPhanSangThapPhan(char *nhiPhan) {
    long soThapPhan = 0;
    int i = 0;

    // Tìm độ dài của chuỗi nhị phân
    while (nhiPhan[i] != '\0') {
        i++;
    }

    // Tính giá trị thập phân tương ứng
    for (int j = i - 1, coSo = 1; j >= 0; j--, coSo *= 2) {
        if (nhiPhan[j] == '1') {
            soThapPhan += coSo;
        }
    }

    return soThapPhan;
}

int main() {
    char nhiPhanInput[20]; // Giả sử đầu vào là một chuỗi nhị phân
    long ketQuaThapPhan;

    // Nhận đầu vào từ người dùng
    printf("Nhập một số nhị phân: ");
    scanf("%s", nhiPhanInput);

    // Chuyển đổi từ nhị phân sang thập phân
    ketQuaThapPhan = chuyenNhiPhanSangThapPhan(nhiPhanInput);

    // Hiển thị kết quả
    printf("Giá trị thập phân tương ứng: %ld\n", ketQuaThapPhan);

    return 0;
}
