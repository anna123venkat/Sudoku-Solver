#ifndef SOLVER_H
#define SOLVER_H

// Function prototypes for the Sudoku solver
int solve_cell(int row, int column);
int is_valid(int row, int column, int value);

// Global grid for the Sudoku puzzle
extern int grid[9][9];

#endif // SOLVER_H
