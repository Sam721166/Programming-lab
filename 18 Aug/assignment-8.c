#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius = %.2f\n", celsius);


    float c2, f2;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c2);
    f2 = ((c2 * 9) / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", f2);
    return 0;
}
