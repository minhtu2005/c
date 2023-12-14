#include <stdio.h>
int main() {
    int n;
    printf (" nhap so nguyen n (1 <= n <= 9):");
    scanf("%d",&n);
    if (n >= 1 && n <= 9) {
        printf("Bang cuu chuong %d:\n", n);
        for (int i = 1; i <= 9; i++) {
            int ket_qua = n * i;
            printf("%d x %d = %d\n", n, i, ket_qua);
        }
    } else {
        printf("Đau vao  khong hop le. Vui long nhap so nguyen n trong khoang tu 1 đến 9.\n");
    }
    return 0;

}