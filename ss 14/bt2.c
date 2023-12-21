#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a1 = 10;
    int a2 = 20;

    printf("Truoc khi doi cho:\n");
    printf("a1 = %d, a2 = %d\n", a1, a2);
    printf("Hieu cua var1 va var2: %d\n", a1 - a2);

    swap(&a1, &a2);

    printf("\nSau khi doi cho:\n");
    printf("a1 = %d, a2 = %d\n", a1, a2);
    printf("Hieu cua a1 va a2: %d\n", a1 - a2);

    return 0;
}
