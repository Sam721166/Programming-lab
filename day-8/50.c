#include <stdio.h>

int main() {
    int num, digits[20], i = 0, j, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        digits[i] = temp % 10;
        temp /= 10;
        i++;
    }

    for (j = 0; j < i / 2; j++) {
        if (digits[j] != digits[i - j - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}