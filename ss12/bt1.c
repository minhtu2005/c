#include <stdio.h>

void tinh_toan(int a, int b, int c ) {
    int so[5] = {a, b, c, };
    int cap = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            printf("Cap so thu %d :\n", cap++);
            if (so[i] > so[j]) {
                printf("%d + %d = %d\n", so[i], so[j], so[i] + so[j]);
                printf("%d - %d = %d\n", so[i], so[j], so[i] - so[j]);
            } else {
                printf("%d + %d = %d\n", so[j], so[i], so[i] + so[j]);
                printf("%d - %d = %d\n", so[j], so[i], so[j] - so[i]);
            }
        }
    }
}
int main() {
    int a, b, c;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    tinh_toan(a, b, c);
    return 0;
}
