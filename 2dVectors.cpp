#include <iostream>
#include <vector>
using namespace std;


 
int main() {
  vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};

//   rows = mat.size(); 
// colums = mat[i].size(); 

// the advantage of 2d vector over 2d arrays is we can store extra elem in perticular row 

for(int i = 0; i<mat.size(); i++){
    for(int j=0; j<mat[i].size(); j++){
        cout << mat[i][j] << " ";
    } 
    cout<< endl;
}


   return 0;
}