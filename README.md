# Sudoku Solver  

This is a mini project that implements a **Sudoku Solver** using the C programming language. The project solves Sudoku puzzles with a user-friendly interface and ensures at least one valid solution using the **backtracking algorithm**. The solver also validates user-input puzzles and generates new puzzles.

## Features  
- **Solver**: Solves Sudoku puzzles entered by users.  
- **Puzzle Generator**: Creates random Sudoku puzzles for users to solve.  
- **Puzzle Validation**: Ensures the puzzles follow Sudoku rules.  
- **Backtracking Algorithm**: Efficiently solves puzzles by incrementally filling numbers and backtracking when necessary.

## Technologies Used  
- **Programming Language**: C  
- **Algorithm**: Backtracking for solving Sudoku puzzles.  

## How to Run the Project  

1. **Clone the Repository**:  
   ```bash
   git clone <repository-url>
   cd sudoku-solver
   ```
2. **Compile the Program**:  
   ```bash
   gcc sudoku_solver.c -o sudoku_solver
   ```
3. **Run the Program**:  
   ```bash
   ./sudoku_solver
   ```

## Code Structure  

- **sudoku_solver.c**: Contains the main logic for reading input, validating, generating, and solving Sudoku puzzles.

## Algorithm Description  
- **Backtracking Algorithm**:  
  The program tries to fill the grid incrementally and backtracks when a conflict occurs, ensuring all constraints are met.

## Output  
- **Sample Run**: Displays both the initial puzzle and the solved grid. If a puzzle is unsolvable, the program notifies the user.  
- **Screenshots**: Refer to the `/screenshots` folder for sample outputs.

## Contributors  
- **Abhinand K Anna** (9517202109001)  
- **Muthu Nitheesh R** (9517202109036)  
- **S Prasanna Venkatesh** (9517202109040)  

## Acknowledgments  
Special thanks to our mentors and peers for their continuous guidance and support throughout this project.
