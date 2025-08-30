#include <stdio.h>
#include <math.h>

int main() {
    float number;
    
    printf("Enter a number: ");
    scanf("%f", &number);
    
    printf("Floor value: %.0f\n", floor(number));
    printf("Ceil value: %.0f\n", ceil(number));
    
    return 0;
}