#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;
    float realPart, imagPart;

    printf("Enter coefficients (a, b, c) of ax^2 + bx + c = 0\n");
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    discriminant = b*b - 4*a*c;
    realPart = -b / (2*a);
    imagPart = sqrt(fabs(discriminant)) / (2*a);

    root1 = realPart + imagPart;
    root2 = realPart - imagPart;

    printf("Root1 = %.2f\n", root1);
    printf("Root2 = %.2f\n", root2);

    return 0;
}