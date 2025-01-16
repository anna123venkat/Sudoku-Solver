#include "utils.h"
#include <stdio.h>

// Input the Sudoku grid from the user
int input_grid() {
    int row = 0, column = 0;
    char character;

    printf("Enter the Sudoku grid row by row (use '.' or '0' for empty cells):\n");

    while (row < 9) {
        character = getchar();

        if ((character >= '1' && character <= '9') || character == '.' || character == '0') {
            grid[row][column] = (character == '.' || character == '0') ? 0 : (character - '0');
            column++;
        }

        if (column == 9) {
            column = 0;
            row++;
        }
    }

    return 1;
}

// Validate the initial grid to ensure it follows Sudoku rules
int validate_grid() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] != 0 && !is_valid(i, j, grid[i][j])) {
                return 0;
            }
        }
    }
    return 1;
}

// Print the current state of the Sudoku grid
void print_grid() {
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0) {
            printf("+-------+-------+-------+\n");
        }

        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0) {
                printf("| ");
            }

            if (grid[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", grid[i][j]);
            }
        }

        printf("|\n");
    }

    printf("+-------+-------+-------+\n");
}
