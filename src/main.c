#include <stdio.h>
#include "solver.h"
#include "utils.h"

int main() {
    // Input the Sudoku grid
    if (!input_grid()) {
        printf("Error: Unable to input grid\n");
        return 1;
    }

    // Validate the initial grid
    printf("\nValidating puzzle... ");
    if (!validate_grid()) {
        printf("Invalid puzzle!\n");
        return 1;
    }

    // Display the initial grid
    printf("Initial Puzzle:\n");
    print_grid();

    // Solve the Sudoku puzzle
    if (!solve_cell(0, 0)) {
        printf("\nUnfortunately, your puzzle is unsolvable.\n");
        return 1;
    }

    // Display the solved grid
    printf("\nPuzzle Solved:\n");
    print_grid();

    return 0;
}
