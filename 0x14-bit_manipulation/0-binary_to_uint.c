#include "main.h"


/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */


unsigned int binary_to_uint(const char *b) {
    // Check if the input string is NULL
    if (b == NULL) {
        return 0;
    }

    unsigned int result = 0;

    // Iterate through each character of the binary string
    while (*b != '\0') {
        // Check if the character is '0' or '1'
        if (*b != '0' && *b != '1') {
            // If there is a character other than '0' or '1', return 0
            return 0;
        }

        // Multiply the result by 2 (left shift) and add the current binary digit
        result = result * 2 + (*b - '0');

        // Move to the next character
        b++;
    }

    return result;
}

int main() {
    const char *binaryNumber = "1101"; // Replace with your binary number
    unsigned int result = binary_to_uint(binaryNumber);

    printf("Binary: %s\n", binaryNumber);
    
    if (result != 0) {
        printf("Unsigned Int: %u\n", result);
    } else {
        printf("Invalid binary string\n");
    }

    return 0;
}
