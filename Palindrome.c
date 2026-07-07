#include <stdio.h>

int main() {
    int x, original, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &x);

    original = x;

    while (x > 0) {
        rem = x % 10;
        reverse = reverse * 10 + rem;
        x = x / 10;
    }

    if (original == reverse)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
