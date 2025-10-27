#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 3;

    for (i = 1; i <= rows; i++) {
        for (space = i; space < rows; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
