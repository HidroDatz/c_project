#include <stdio.h>

// Hàm chuyển đổi từ thập phân sang nhị phân
void thapPhanSangNhiPhan(long thapPhan, char *nhiPhan) {
    int index = 0;

    // Chuyển mỗi chữ số thành nhị phân
    while (thapPhan > 0) {
        nhiPhan[index++] = (thapPhan % 2) + '0';
        thapPhan /= 2;
    }

    // Thêm ký tự kết thúc chuỗi
    nhiPhan[index] = '\0';

    // Đảo ngược chuỗi nhị phân
    for (int i = 0, j = index - 1; i < j; i++, j--) {
        char temp = nhiPhan[i];
        nhiPhan[i] = nhiPhan[j];
        nhiPhan[j] = temp;
    }
}

int main() {
    long thapPhanInput;
    char nhiPhanResult[20]; // Giả sử kết quả sẽ là một chuỗi nhị phân

    // Nhận đầu vào từ người dùng
    printf("Nhập một số thập phân: ");
    scanf("%ld", &thapPhanInput);

    // Chuyển đổi từ thập phân sang nhị phân
    thapPhanSangNhiPhan(thapPhanInput, nhiPhanResult);

    // Hiển thị kết quả
    printf("Giá trị nhị phân tương ứng: %s\n", nhiPhanResult);

    return 0;
}
