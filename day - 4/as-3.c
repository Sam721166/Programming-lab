#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is the greatest\n", a);
    }
    else {
        printf("%d is the greatest\n", b);
    }

    return 0;
}
