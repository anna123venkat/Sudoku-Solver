#include "solver.h"
#include "utils.h"

// Function to solve a cell in the Sudoku grid
int solve_cell(int row, int column) {
    int number;

    // If column exceeds grid size, move to next row
    if (column == 9) {
        column = 0;
        row++;
    }

    // If row exceeds grid size, the puzzle is solved
    if (row == 9) {
        return 1;
    }

    // Skip cells that are already filled
    if (grid[row][column] != 0) {
        return solve_cell(row, column + 1);
    }

    // Try numbers 1 to 9
    for (number = 1; number <= 9; number++) {
        if (is_valid(row, column, number)) {
            grid[row][column] = number;

            if (solve_cell(row, column + 1)) {
                return 1;
            }

            // Backtrack
            grid[row][column] = 0;
        }
    }

    // Return 0 if no solution is found for this path
    return 0;
}

// Function to validate if a number can be placed in a cell
int is_valid(int row, int column, int value) {
    int i, j, box_row_start, box_col_start;

    // Check the row and column
    for (i = 0; i < 9; i++) {
        if (grid[row][i] == value || grid[i][column] == value) {
            return 0;
        }
    }

    // Check the 3x3 subgrid
    box_row_start = (row / 3) * 3;
    box_col_start = (column / 3) * 3;

    for (i = box_row_start; i < box_row_start + 3; i++) {
        for (j = box_col_start; j < box_col_start + 3; j++) {
            if (grid[i][j] == value) {
                return 0;
            }
        }
    }

    return 1;
}
