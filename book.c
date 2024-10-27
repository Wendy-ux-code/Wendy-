#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publicationYear;
    char ISBN[13];
    float price;
};

int main() {
    struct book book;

    // Initialize the fields of the 'book' structure
    strcpy(book.title, "Introduction to C Programming");
    strcpy(book.author, "John Smith");
    book.publicationYear = 2022;
    strcpy(book.ISBN, "9780131103627");
    book.price = 49.99;

    // Display initialized details
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);
    printf("ISBN: %s\n", book.ISBN);
    printf("Price: %.2f\n", book.price);

    // Prompt user to enter details
    getchar(); // Clear the input buffer
    printf("Enter Title: ");
    scanf("%29s", book.title); // Limit input to prevent overflow
    printf("Enter Author: ");
    scanf("%29s", book.author); // Limit input
    printf("Enter Publication Year: ");
    scanf("%d", &book.publicationYear);
    printf("Enter ISBN: ");
    scanf("%12s", book.ISBN); // Limit input
    printf("Enter Price: ");
    scanf("%f", &book.price);

    // Display updated details
    printf("\nUpdated Book Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);
    printf("ISBN: %s\n", book.ISBN);
    printf("Price: %.2f\n", book.price);

    return 0;
}

	
