#include <iostream>
#include <vector>
using namespace std;



// Brute force approach which takes the tc as O(n*n) 

// bool searchIn2DMatrix(vector<vector<int>> mat, int target){
//     for(int i=0; i<mat.size(); i++){
//         for(int j=0; j<mat[i].size(); j++){
//             if(mat[i][j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
 
// int main() {
//    vector<vector<int>> mat = {{1,2,3,4}, {10,11,16,20}, {23,30,34,60}};
//    int target = 24;

//    cout << searchIn2DMatrix(mat, target);
//    return 0;
// }





// Optimized Approach which thaks the time complexity as O(log(m*n))

bool serachInRow(vector<vector<int>>mat, int target, int row){
    int n = mat[0].size();
    int st = 0, end = n-1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(target == mat[row][mid]){
            return true;
        }else if(target > mat[row][mid]){
            st = mid + 1;
        }else{
            end = mid -1;
        }
    }
    return false;
    
}

bool searchIn2DMatrix(vector<vector<int>>mat, int target){
    int m = mat.size();
    int n = mat[0].size();
    int stRow = 0;
    int endRow = m-1;

    while(stRow <= endRow){
        int midRow = stRow + (endRow - stRow)/2;

        if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
            return serachInRow(mat, target, midRow);
        }else if(target >= mat[midRow][n-1]){
            stRow = midRow + 1;
        }else{
            endRow = midRow - 1;
        }
    }
    return false;
}

int main() {
   vector<vector<int>> mat = {{1,2,3,4}, {10,11,16,20}, {23,30,34,60}};
   int target = 34;

   cout << searchIn2DMatrix(mat, target);
   return 0;
}
