#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9: 
            if (marks >= 95)
                printf("Grade: A+\n");
            else
                printf("Grade: A\n");
            break;
        case 8: printf("Grade: B\n"); break;
        case 7: printf("Grade: C\n"); break;
        default: printf("Grade: F\n");
    }
    return 0;
}
