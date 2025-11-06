#include <stdio.h>

int sumOfEvenNumbers();

int main() {
    int sum;

    sum = sumOfEvenNumbers();

    printf("The sum of the first 10 even natural numbers is: %d\n", sum);

    return 0;
}


int sumOfEvenNumbers() {
    int i, sum = 0;

    for(i = 1; i <= 10; i++) {
        sum += 2 * i;  
    }

    return sum;
}