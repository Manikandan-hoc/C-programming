#include <stdio.h>

int main() {
    int n, digit;
    int x = 0, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit != 0) {
            x = x * 10 + digit;
            sum = sum + digit;
        }

        n = n / 10;
    }

    // Reverse x
    int rev = 0;
    while (x > 0) {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    printf("Output: %d\n", rev * sum);

    return 0;
}
