#include <iostream>

#define N 9
using namespace std;
//print the Sudoku grid
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++)
            cout << grid[row][col] << " ";
        cout <<endl;
    }
}

//to check if a number is safe or not
bool isSafe(int grid[N][N], int row, int col, int num) {
    //to check if number already there in row
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num)
            return false;
    }

    //to check number is already there or not
    for (int i = 0; i < N; i++) {
        if (grid[i][col] == num)
            return false;
    }

    //to check if number is in 3cross3 grid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true; //if safe
}

//to solve
bool solveSudoku(int grid[N][N]) {
    int row = -1, col = -1;
    bool isEmpty = false;

    //to find empty cell
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = true;
                break;
            }
        }
        if (isEmpty)
            break;
    }

    //if puzzle is solved
    if (!isEmpty)
        return true;

    // Try placing numbers 1 to 9 in the empty cell
    for (int num = 1; num <= 9; num++) {
        //to Check num in grid is safe
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num; // Tentatively place num

            // to solve complete sudoku
            if (solveSudoku(grid))
                return true;

            // If no solution undo the move
            grid[row][col] = 0;
        }
    }

    // If no number from 1 to 9 can be placed,
    return false;
}

int main() {
    int grid[N][N] = {
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

    //solve and print the answer
    if (solveSudoku(grid))
        printGrid(grid);
    else
        std::cout << "No solution";

    return 0;
}

