#include <stdio.h>
#include <assert.h>

// Include the Sudoku Solver functions
int input_grid();
int validate_grid();
int solve_cell(int row, int column);
int is_valid(int row, int column, int value);
void print_grid();

// Mock input for testing
int mock_grid[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

// Function to mock the input grid
int mock_input_grid() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            original[i][j] = grid[i][j] = mock_grid[i][j];
        }
    }
    return 1;
}

void test_sudoku_solver() {
    // Mock input grid
    assert(mock_input_grid() == 1);

    // Validate the grid
    printf("Validating grid...\n");
    assert(validate_grid() == 1);

    // Solve the Sudoku
    printf("Solving Sudoku...\n");
    assert(solve_cell(0, 0) == 1);

    // Print the solved grid
    printf("Solved Sudoku grid:\n");
    print_grid();

    // Check a known solution cell for correctness
    assert(grid[0][2] == 4); // Example: Check that a specific cell matches the solution
}

int main() {
    printf("Running tests...\n");
    test_sudoku_solver();
    printf("All tests passed successfully!\n");
    return 0;
}
