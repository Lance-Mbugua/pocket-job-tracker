// FUNDAMENTALS MODULE SOURCE
// Author: Lance Mbugua, limbugua@myseneca.ca, 144111226, 2024/11/28
// Course: CPR101NII
// Project: fundamentals : version 1
// Purpose: This source file implements the fundamentals function, which demonstrates
//          indexing strings by allowing the user to input a string and a character position.

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE     80
#define NUM_INPUT_SIZE  10

#include "fundamentals.h"

// Function: fundamentals
// Purpose: Demonstrates indexing strings by allowing the user to input a string and a character position.
// Parameters: None
// Returns: void
void fundamentals(void) {
    // V1
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    do {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0';  // Remove newline character

        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';  // Remove newline character

            position = atoi(numInput);  // Convert input to integer

            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;  // Adjust position if out of bounds
                printf("Too big... Position reduced to max. available\n");
            }

            // Display the character at the specified position
            printf("The character found at %d position is '%c'\n", (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);  // Continue until user inputs 'q'

    printf("*** End of Indexing Strings Demo ***\n\n");
}

    // Author: Lance Mbugua, limbugua@myseneca.ca, 144111226, 2024/12/04
// Course: CPR101NII
// Project: fundamentals : version 2
// Purpose: demonstrate how to measure the length of strings entered by the user.
    // V2: Version 2 of the code
    printf(" *** Start of Measuring Strings Demo *** \n"); // Print the start message

    char buffer2[BUFFER_SIZE]; // Declare a buffer to store the input string

    do {
        printf("Type a string (q - to quit): \n"); // Prompt the user to type a string
        fgets(buffer2, BUFFER_SIZE, stdin); // Read the input string from the user
        buffer2[strlen(buffer2) - 1] = '\0';  // Remove the newline character from the input string

        if (strcmp(buffer2, "q") != 0) { // Check if the input string is not "q"
            printf("The length of '%s' is %d characters \n", buffer2, (int)strlen(buffer2)); // Print the length of the input string
        }
    } while (strcmp(buffer2, "q") != 0); // Repeat the loop until the user types "q"

    printf(" *** End of Measuring Strings Demo *** \n\n"); // Print the end message

    // Author: Lance Mbugua, limbugua@myseneca.ca, 144111226, 2024/12/12
// Course: CPR101NII
// Project: fundamentals : version 3
// Purpose: The code demonstrates how to measure and copy user-entered strings in C.
    // V3: Version 3 of the code
    printf(" *** Start of Copying Strings Demo *** \n"); // Print the start message

    char destination[BUFFER_SIZE]; // Declare a buffer for the destination string
    char source[BUFFER_SIZE]; // Declare a buffer for the source string

    do {
        destination[0] = '\0'; // Reset the destination string to empty
        printf("Destination string is reset to empty\n"); // Inform the user that the destination string is reset
        printf("Type the source string (q - to quit): \n"); // Prompt the user to type the source string
        fgets(source, BUFFER_SIZE, stdin); // Read the source string from the user
        source[strlen(source) - 1] = '\0'; // Remove the newline character from the source string

        if (strcmp(source, "q") != 0) { // Check if the source string is not "q"
            strcpy(destination, source); // Copy the source string to the destination string
            printf("New destination string is '%s'\n", destination); // Print the new destination string
        }
    } while (strcmp(source, "q") != 0); // Repeat the loop until the user types "q"

    printf(" *** End of Copying Strings Demo *** \n\n"); // Print the end message