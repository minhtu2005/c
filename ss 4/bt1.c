#include <stdio.h>
int main() {
    int number;
    printf("number: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So nguyen chia het cho 3 va 5");
    } else {
        printf("So nguyen khong chia het cho 3 va 5");
    }
    return 0;
}