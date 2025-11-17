#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, total;

    d1.feet = 900;
    d1.inches = 9;

    d2.feet = 500;
    d2.inches = 5;

    total.inches = d1.inches + d2.inches;
    total.feet = d1.feet + d2.feet;

    if (total.inches >= 12) {
        total.feet += total.inches / 12;
        total.inches = total.inches % 12;
    }

    printf("Total distance travelled: %d feet %d inches\n", total.feet, total.inches);

    return 0;
}