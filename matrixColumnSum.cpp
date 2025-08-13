#include <iostream>
using namespace std;

// max col sum 

int getMaxColSum(int matrix[][3], int row, int col) {
    int maxColSum = INT16_MIN;

    for(int j = 0; j < col; j++) {
        int colSum = 0;
        for(int i = 0; i < row; i++) {
            colSum += matrix[i][j];
        }
        maxColSum = max(maxColSum, colSum);
    }

    return maxColSum;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3, cols = 3;

    cout << "Maximum column sum is: " << getMaxColSum(matrix, rows, cols) << endl;

    return 0;
}
