#include <stdio.h>

int main() {
    // Khai báo biến
    int a = 3, b = 4, temp;

    // In ra giá trị trước khi hoán đổi
    printf("Truoc khi hoan doi: a = %d, b = %d\n", a, b);

    // Sử dụng biến tạm để hoán đổi giá trị
    temp = a;
    a = b;
    b = temp;

    // In ra giá trị sau khi hoán đổi
    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);

    return 0;
}
// Created by PC on 12/1/2023.
//
