#include<stdio.h>
#define M 50

struct state {
    char name[50];
    long int population;
    float literacyRate;
    float income;
} st[M]; /* khai bao mang cac struct */

int main() {
    int i, n, l, m, maximumLiteracyRate, maximumIncome;
    float rate;
    l = m = -1;
    maximumLiteracyRate = maximumIncome = 0;

    printf("Nhap so thanh pho:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap chi tiet thanh pho thu %d: ", i);

        printf("Nhap ten thanh pho: ");
        scanf("%s", &st[i].name);

        printf("Nhap tong so dan: ");
        scanf("%ld", &st[i].population);

        printf("Nhap ti le biet doc viet: ");
        scanf("%f", &rate);
        st[i].literacyRate = rate;

        printf("Nhap tong thu nhap: ");
        scanf("%f", &st[i].income);
    }

    for (i = 0; i < n; i++) {
        if (st[i].literacyRate >= maximumLiteracyRate) {
            maximumLiteracyRate = st[i].literacyRate;
            l++;
        }
        if (st[i].income > maximumIncome) {
            maximumIncome = st[i].income;
            m++;
        }
    }

    printf("Thanh pho co ti le biet doc viet cao nhat: %s", st[l].name);
    printf("Thanh pho co tong thu nhap cao nhat: %s", st[m].name);

    return 0;
}
