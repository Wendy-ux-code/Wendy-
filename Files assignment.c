#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 200
 // Maximum length for a paragraph

// Function to write a paragraph to the file
void writeToFile() {
    FILE *file = fopen("output.txt", "w");
     // Open file in write mode
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char paragraph[MAX_LENGTH];
    printf("Enter a paragraph (up to 200 characters):\n");
    fgets(paragraph, MAX_LENGTH, stdin);
     // Read input from the user
    fprintf(file, "%s", paragraph); 
    // Write the paragraph to the file

    fclose(file);
     // Close the file
    printf("Paragraph written to 'output.txt'.\n");
}

// Function to read and display the content of the file
void readFromFile() {
    FILE *file = fopen("output.txt", "r");
     // Open file in read mode
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char buffer[MAX_LENGTH];
    printf("Content of 'output.txt':\n");
    while (fgets(buffer, MAX_LENGTH, file) != NULL) { 
    // Read and display content
        printf("%s", buffer);
    }

    fclose(file); 
    // Close the file
}

// Function to append a paragraph to the file
void appendToFile() {
    FILE *file = fopen("output.txt", "a");
     // Open file in append mode
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char paragraph[MAX_LENGTH];
    printf("Enter an additional paragraph (up to 200 characters):\n");
    fgets(paragraph, MAX_LENGTH, stdin); 
    // Read input from the user
    fprintf(file, "%s", paragraph);
     // Append the paragraph to the file

    fclose(file); 
    // Close the file
    printf("Additional paragraph appended to 'output.txt'.\n");
}

// Main function to demonstrate the file operations
int main() {
    int choice;

    while (1) {
        printf("\nFile Operations Menu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        // Clear newline character from input buffer

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

	
