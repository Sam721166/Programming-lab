#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[10];
    int i;

    printf("Enter details of 10 books:\n");

    for(i = 0; i < 10; i++) {
        printf("\n--- Book %d ---\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &books[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]s", books[i].name);     

        printf("Enter Author Name: ");
        scanf(" %[^\n]s", books[i].author);   

        printf("Enter Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n======= BOOK DETAILS =======\n");

    for(i = 0; i < 10; i++) {
        printf("\nBook %d\n", i + 1);
        printf("ID: %d\n", books[i].id);
        printf("Name: %s\n", books[i].name);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}