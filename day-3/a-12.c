#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter interest rate (in %%): ");
    scanf("%f", &rate);
    
    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    compound_interest = principal * (pow(1 + rate/100, time)) - principal;
    
    printf("Compound Interest = %.2f\n", compound_interest);
    printf("Total Amount = %.2f\n", compound_interest + principal);
    
    return 0;
}