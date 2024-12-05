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