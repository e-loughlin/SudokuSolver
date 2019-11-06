# Sudoku Puzzle Solver in C++
## Solves any Suduko puzzle.
### Author: Evan Loughlin
______________________________________

# Development (Currently Ubuntu Only):

### Sourcing Environment and Installing Dependencies
```
sudo ./install_dependencies.sh
source environment.sh

```

### Building With Tests
```
cd src/
b
```

### Building Without Tests
```
cd src/
b -notb
```

### Dependencies
* Python 3.6.8
* Qt 5.9.3
* cmake 3.10.2

### Creating New Classes (Interfaces, Headers, Implementations...)
```
newclass -h
```

# Usage: 
run ./RunSudokuSolver <inputName.txt>

The input.txt file is the Sudoku puzzle to be solved, taking the following form:

```
1 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

Note that 0's indicate blanks in the input.
