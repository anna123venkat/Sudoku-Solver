#include <stdio.h>
#include "solver.h"
#include "utils.h"

// Function to load a puzzle from a file
int load_puzzle_from_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Could not open file %s\n", filename);
        return 0;
    }

    int row = 0, column = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            if (column == 9) {
                row++;
                column = 0;
            }
            continue;
        }

        if ((ch >= '0' && ch <= '9') || ch == '.') {
            grid[row][column] = (ch == '.' || ch == '0') ? 0 : (ch - '0');
            column++;
        }

        if (row == 9) break;
    }

    fclose(file);
    return 1;
}

int main() {
    // Test puzzle file
    const char *filename = "test_puzzles.txt";

    printf("Loading test puzzles from file: %s\n", filename);

    if (!load_puzzle_from_file(filename)) {
        return 1;
    }

    // Validate and solve the puzzle
    printf("Validating loaded puzzle...\n");
    if (!validate_grid()) {
        printf("Invalid puzzle!\n");
        return 1;
    }

    printf("Solving the puzzle...\n");
    if (!solve_cell(0, 0)) {
        printf("The puzzle is unsolvable.\n");
        return 1;
    }

    printf("Solved Puzzle:\n");
    print_grid();

    return 0;
}
