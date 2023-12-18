#include <stdio.h>
#include <math.h>
int main() {

    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    // Chuyển đổi nhị phân sang thập phân
    int c = 0;
    int a= 1;
    int temp = n;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        c += last_digit * a;
        a = a * 2;
    }

    // Chuyển đổi thập phân sang bát phân
    int octal = 0;
   a= 1;
    temp = c;
    while (temp) {
        int last_digit = temp % 8;
        temp = temp / 8;
        octal += last_digit * a;
        a = a * 10;
    }

    printf("\nOUTPUT:\n");
    printf("%d", octal);

    return 0;
}