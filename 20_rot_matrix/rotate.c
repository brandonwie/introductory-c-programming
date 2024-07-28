#include <stdio.h>

void rotate(char matrix[10][10]) {
    char temp[10][10];

    // Copy the rotated values into the temp matrix
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[j][10 - 1 - i] = matrix[i][j];
        }
    }

    // Copy the rotated values back to the original matrix
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = temp[i][j];
        }
    }
}

