#include <stdio.h>

int main() {
    int num, Numb, remain, result = 0;
    printf("Cac so Armstrong co ba chu so la:\n");

    for(num = 100; num < 1000; num++) {
        Numb = num;
        result = 0;

        while (Numb != 0) {
            remain = Numb % 10;
            result += remain * remain * remain;
            Numb /= 10;
        }

        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}