#include <stdio.h>

int input_grid();
int validate_grid();
int solve_cell(int row, int column);
int is_valid(int row, int column, int value);
void print_grid();

int original[9][9], grid[9][9];

int main() {
    if (!input_grid()) {
        printf("Error: Unable to input grid\n");
        return 0;
    }

    printf("\nValidating puzzle... ");
    if (!validate_grid()) {
        printf("Invalid!\n");
        return 0;
    }
    print_grid();

    if (!solve_cell(0, 0)) {
        printf("Unfortunately, your puzzle is unsolvable\n");
        return 0;
    }

    printf("\nPuzzle solved:\n");
    print_grid();
    return 0;
}
