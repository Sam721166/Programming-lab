#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = num1 - num2;

    printf("Result = %.2f\n", result);

    return 0;
}