#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

// Function prototypes for utility operations
int input_grid();
int validate_grid();
void print_grid();

// Global grid for the Sudoku puzzle
extern int grid[9][9];

#endif // UTILS_H
