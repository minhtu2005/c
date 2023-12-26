#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int c, e;
    printf("Nhap so dong: ");
    scanf("%d", &c);
    printf("Nhap so cot: ");
    scanf("%d", &e);

    int a[c][e];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < e; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int s = 0, q = -1;
    for (int j = 0; j < e; j++) {
        int primes = 0;
        for (int i = 0; i < c; i++) {
            if (isPrime(a[i][j]))
                primes++;
        }
        if (primes >= s) {
            s = primes;
            q = j;
        }
    }
    printf("Cot %d co nhieu so nguyen to nhat\n", q);
    printf("So luong so nguyen to o cot %d : %d\n", q, s);
    return 0;
}