#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap diem mon Toan: ");
    scanf("%f", &a);
    printf("Nhap diem mon Van: ");
    scanf("%f", &b);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &c);
    printf("Tong diem 3 mon la: %.2f\n", a + b + c);
    printf("Diem trung binh 3 mon la: %.2f\n", (a + b + c) / 3);
    return 0;
}