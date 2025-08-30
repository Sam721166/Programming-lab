#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    int last_digit_mod = number % 10;
    printf("Last digit using modulus: %d\n", last_digit_mod);

    
    int last_digit_div = number - ((number / 10) * 10);
    printf("Last digit without modulus: %d\n", last_digit_div);

    return 0;
}