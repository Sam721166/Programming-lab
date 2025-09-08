#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Division by zero not allowed!\n");
                return 0;
            }
            break;
        default: 
            printf("Invalid operator!\n");
            return 0;
    }

    printf("Result = %.2f\n", result);
    return 0;
}
