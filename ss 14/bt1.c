#include <stdio.h>

int main() {
    int var = 10;
    int *p;

    p = &var;

    printf("Gia tri cua var: %d\n", var);
    printf("Dia chi cua var: %p\n", &var);

    printf("Gia tri cua var thong qua ptr: %d\n", *p);
    printf("Dia chi cua var thong qua ptr: %p\n", p);

    return 0;
}