#include <stdio.h>

int main() {
    int i, j;
    int rows = 3;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 3 - i + 1; j++)
            printf("%d", j);

        for (j = 1; j < i * 2 - 1; j++)
            printf(" ");

        for (j = 3 - i + 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}
