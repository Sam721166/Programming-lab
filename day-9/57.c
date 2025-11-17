#include <stdio.h>
#include <stdlib.h>

int main() {
    char c1[20], c2[20];
    int r1, i1, r2, i2;

    printf("Enter first complex number (example: 3+4i): ");
    scanf("%s", c1);

    printf("Enter second complex number (example: 5-2i): ");
    scanf("%s", c2);

    sscanf(c1, "%d%di", &r1, &i1);
    sscanf(c2, "%d%di", &r2, &i2);

    int r_sum = r1 + r2;
    int i_sum = i1 + i2;

    printf("\nSum = %d + %di\n", r_sum, i_sum);

    return 0;
}