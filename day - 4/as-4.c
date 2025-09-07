#include <stdio.h>

int main() {
    int toss;

    printf("Enter coin toss result (1 for Head, 0 for Tail): ");
    scanf("%d", &toss);

    if (toss == 1) {
        printf("It is Head\n");
    }
    else if (toss == 0) {
        printf("It is Tail\n");
    }
    else {
        printf("Invalid input! Please enter 1 or 0.\n");
    }

    return 0;
}
