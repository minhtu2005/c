#include <stdio.h>


int main() {
    float a, b, c;
    printf("Nhap vao 3 canh cua tam giac: ");
    scanf("%f %f %f", a, b, c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Day la tam giac ");
        if (a == b && b == c) {
            printf("deu.");
        } else if (a == b  a == c  b == c) {
            if (a + b == c || a + c == b  b + c == a) {
                printf("vuong can.");
            } else {
                printf("can.");
            }
        } else if (a + b == c  aa + cc == bb || bb + cc == aa) {
            printf("vuong.");
        } else {
            printf("thuong.");
        }
    } else {
        printf("3 so vua nhap khong phai la canh cua tam giac.");
    }

    return 0;
}
