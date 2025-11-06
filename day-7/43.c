#include <stdio.h>

int main() {
    int i, j, space;
    int num = 10;

    for (i = 1; i <= 4; i++) {
        for (space = 4; space > i; space--)
            printf(" ");

        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}
