#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
char* binary_representation(unsigned long int n) {
    int index = 0;

    // Determine the number of significant bits
    int num_bits = 0;
    unsigned long int temp = n;
    while (temp != 0) {
        num_bits++;
        temp >>= 1;
    }

    char* binary = (char*) malloc(num_bits + 1);
    if (binary == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    while (n != 0) {
        binary[index] = (n & 1) ? '1' : '0';
        n >>= 1;
        index++;
    }

    binary[index] = '\0';
    return binary;
}
