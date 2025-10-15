#include <iostream>
#include <vector>
using namespace std;

// tc of problem is O(n!)

bool isSafe(vector<string> &board, int row, int col, int n){
    for(int i=0; i<n; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    for(int j=0; j<n; j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }
    for(int i=row, j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    for(int i=row, j=col; i>=0 && j<n; i--,j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}


void nQueen(int n,vector<string> &board, vector<vector<string>> &ans, int row){
    if(row == n){
        ans.push_back({board});
        return;
    }
    for(int j=0; j<n; j++){
        if(isSafe(board, row, j, n)){
            board[row][j] = 'Q';
            nQueen(n, board, ans, row+1);
            board[row][j] = '.';
        }
    }
}

vector<vector<string>> soloveNQueen(int n)
{
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nQueen(n, board, ans, 0);
    return ans;
}

int main()
{
    int n = 4;
    vector<vector<string>> res = soloveNQueen(n);
    for(auto ans : res){
        cout<< "[";
        for(string val : ans){
            cout<< val << " ";
        }
        cout<< "]\n";
    }
    return 0;
}