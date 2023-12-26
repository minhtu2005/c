#include <stdio.h>

void input(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int q, e;
    printf("Nhap so hang: ");
    scanf("%d", &q);
    printf("Nhap so cot: ");
    scanf("%d", &e);

    int a[q][e];
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < e; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < q; j++) {
        input(&a[0][j], &a[e-1][j]);
    }
    printf("Mang sau khi hoan vi hang dau tien va hang cuoi cung:\n");
    for (int i = 0; i < e; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}