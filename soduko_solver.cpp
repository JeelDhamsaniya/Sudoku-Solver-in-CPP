#include <iostream>
#include <vector>
#include "sudoku.hpp"

using namespace std;

int main()
{

    vector<vector<int>> board(9, vector<int>(9, 0));

    // Example Sudoku board (0 represents empty cells)
    // Uncomment the following lines to test with a specific board
    // board = {
    //     {4, 0, 0, 9, 1, 3, 0, 0, 8},
    //     {9, 0, 5, 0, 0, 0, 3, 0, 2},
    //     {6, 0, 0, 2, 0, 4, 1, 9, 7},
    //     {0, 0, 1, 0, 0, 0, 0, 0, 0},
    //     {2, 5, 0, 8, 0, 0, 4, 7, 3},
    //     {3, 0, 9, 7, 0, 6, 8, 5, 0},
    //     {1, 0, 2, 4, 7, 9, 0, 8, 0},
    //     {5, 9, 8, 0, 0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0, 0, 2, 0, 0}};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j]; // comment this line if you want to use the example board above
        }
    }
    // Function to Solve the Sudoku puzzle
    solveSudoku(board);

    // Function to Print the Sudoku board
    printBoard(board);

    // Function to Check if the Sudoku solution is correct
    cout << (isCorrect(board) ? "Your Sudoku solution is correct!" : "Your Sudoku solution is not correct!") << endl; // Check if the solution is correct

    return 0;
}