# 🧩 Sudoku Solver – Header-Only C++ Library

This is a **header-only Sudoku solver** written in modern C++. It provides utility functions to:

- 🧠 Solve a partially-filled Sudoku puzzle
- ✅ Check if a fully-filled Sudoku board is correct
- 🖨️ Print Sudoku boards
- 📋 Validate board input for correctness or solving

---


## 📘 Function Reference

| Function | Description |
|---------|-------------|
| `printBoard(board)` | Prints a 9x9 Sudoku board. Warns if the size is invalid. |
| `isValidForSolution(board)` | Validates board for solving (0–9 values). |
| `isValidForCorrect(board)` | Validates board for correctness check (1–9 only). |
| `isCorrect(board)` | Returns `true` if the given board is a valid, complete Sudoku solution. |
| `solveSudoku(board)` | Solves the Sudoku and returns a new board. If unsolvable, returns empty board. |

## 📎 Input Requirements

- Sudoku board must be a 9×9 grid of integers
- Use:
  - `0` to represent **empty cells**
  - `1–9` to represent **filled cells**
- Values outside `[0–9]` will be treated as invalid

## 📦 Installation

1. Copy the `sudoku.hpp` file into your project directory.
2. Include it in your `.cpp` file:

```cpp
#include "sudoku.hpp"
```

## 🔧 Example

```cpp

#include <iostream>
#include <vector>
#include "sudoku.hpp"
using namespace std;

int main() {
    vector<vector<int>> board = {
        {4, 0, 0, 9, 1, 3, 0, 0, 8},
        {9, 0, 5, 0, 0, 0, 3, 0, 2},
        {6, 0, 0, 2, 0, 4, 1, 9, 7},
        {0, 0, 1, 0, 0, 0, 0, 0, 0},
        {2, 5, 0, 8, 0, 0, 4, 7, 3},
        {3, 0, 9, 7, 0, 6, 8, 5, 0},
        {1, 0, 2, 4, 7, 9, 0, 8, 0},
        {5, 9, 8, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 2, 0, 0}};

    cout << "Original Board:\n";
    printBoard(board);

    auto solved = solveSudoku(board);

    cout << "\nSolved Board:\n";
    printBoard(solved);

    if (isCorrect(solved)) {
        cout << "\n✅ The Sudoku solution is correct.\n";
    } else {
        cout << "\n❌ The Sudoku solution is incorrect.\n";
    }

    return 0;
}
```


---

## 📄 License

This project is licensed under the [MIT License](./LICENSE).
You are free to use, modify, and distribute this code with attribution.

---

## 👨‍💻 Author

**Jeel Dhamsaniya**  
Header-only Sudoku solver for C++
