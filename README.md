# Sudoku Solver

This repository contains the implementation of a Sudoku Solver using the C programming language. It includes the core logic for solving Sudoku puzzles, generating new puzzles, and a command-line interface for users to input and solve puzzles interactively.

## Project Overview

The Sudoku Solver project was developed as part of the Data Structures Laboratory (19IT351) course during the third semester of the B.E. program in Artificial Intelligence and Data Science at Mepco Schlenk Engineering College. The primary objective of this project was to explore and implement the backtracking algorithm for solving computational problems like Sudoku.

### Key Features
- **Puzzle Solver**: Finds solutions to Sudoku puzzles, including user-provided inputs and pre-generated puzzles.
- **Puzzle Generator**: Creates random Sudoku puzzles.
- **Algorithm Used**: Utilizes the backtracking algorithm for efficient puzzle-solving.
- **Command-Line Interface**: Provides a simple interface for user interaction.

## Folder Structure

```
Sudoku-Solver
├── README.md           # Project overview and setup instructions
├── .gitignore          # Specifies files to ignore in Git
├── src                 # Source code directory
│   ├── main.c          # Main source file
│   ├── solver.c        # Contains the Sudoku solving logic
│   ├── utils.c         # Utility functions (e.g., grid validation, printing)
│   └── headers
│       ├── solver.h    # Header file for solver functions
│       └── utils.h     # Header file for utility functions
├── tests               # Test cases for the solver
│   ├── test_puzzles.txt # Example puzzles for testing
│   ├── test_solver.c   # Test program for the solver
│   └── expected_output.txt # Expected outputs for the test puzzles
├── assets              # Images 
    ├── Result 1.png 
    └── Result 2.png   
    └── Result 3.png

```

## How to Run

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/sudoku-solver.git
   cd sudoku-solver
   ```

2. **Run the Solver**:
   Execute the compiled binary:
   ```bash
   ./sudoku_solver
   ```

3. **Input a Puzzle**:
   - Enter Sudoku puzzles row by row using numbers for known cells and `.` or `0` for unknown cells.
   - Example input for a row: `530070000`

4. **View the Output**:
   The program will display the solved Sudoku puzzle if it is solvable.

## Algorithm

The Sudoku Solver uses a **Backtracking Algorithm**:
- Incrementally tries to build a solution.
- If a constraint is violated, it backtracks and tries a different value.
- Guarantees finding a solution if one exists.

### Time Complexity
- The time complexity is approximately \(O(9^{N})\), where \(N\) is the number of empty cells in the puzzle. This is mitigated by efficient pruning.

## Example Input and Output

### Input Puzzle:
```
530070000
600195000
098000060
800060003
400803001
700020006
060000280
000419005
000080079
```

### Solved Puzzle:
```
534678912
672195348
198342567
859761423
426853791
713924856
961537284
287419635
345286179
```

## Contributors
- Abhinand K Anna
- Muthu Nitheesh R
- S Prasanna Venkatesh

## Acknowledgements
- Project guide: Dr. P. Thendral
- Head of Department: Dr. J. Angela Jennifa Sujana

