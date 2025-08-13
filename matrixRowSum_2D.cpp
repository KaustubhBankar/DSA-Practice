#include <iostream>
using namespace std;

// find the max row sum of matrix 

int getMaxSum(int matrix[][3], int row, int col){
    
        int maxRowSum = INT16_MIN;

    for(int i = 0; i<row; i++){
        int rowSumI = 0;
        for(int j=0; j<col; j++){
            rowSumI += matrix[i][j];
        }

        maxRowSum = max(maxRowSum, rowSumI);
    }
    return maxRowSum;
}
 
int main() {
  int matrix[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};
  int rows = 3, cols = 3;
  cout << getMaxSum(matrix, rows, cols);
   return 0;
}