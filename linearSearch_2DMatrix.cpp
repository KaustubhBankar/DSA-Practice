#include <iostream>
using namespace std;
#include <vector>

pair<int, int> linearSearch(int mat[][3], int row, int col, int key){
    pair<int, int> p;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j] == key){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
 
int main() {
  int matrix[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};
  int rows = 3, cols = 3;
  pair<int, int> result = linearSearch(matrix, rows, cols, 6 );
  cout<< result.first << " " << result.second;
   return 0;
}