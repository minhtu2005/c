#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch[100];
    int a[100] = {0}, c, i, j;
    printf("Nhap vao chuoi: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
   c = strlen(str);
    for (i = 0; i < c; i++) {
        ch[i] = str[i];
       a[i] = -1;
    }
    for (i = 0; i < c; i++) {
        int count = 1;
        for (j = i + 1; j < c; j++) {
            if (str[i] == str[j]) {
                count++;
                a[j] = 0;
            }
        }
        if (a[i] != 0) {
            a[i] = count;
        }
    }
    printf("So lan xuat hien cua moi ky tu trong chuoi:\n");
    for (i = 0; i < c; i++) {
        if (a[i] != 0) {
            printf("%c: %d\n", ch[i], a[i]);
        }
    }
    return 0;
}