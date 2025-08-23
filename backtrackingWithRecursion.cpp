#include <iostream>
#include <vector>
using namespace std;

// Q print all subsets ---> O(2^n * n)
void printSubsets(vector<int>arr,vector<int>& ans, int i){
    int n = arr.size();
    
    if(i == n){
        for(int val : ans){
            cout<< val<< " ";
        }
        cout<< endl;
        return;
    }

    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);

    ans.pop_back(); //backtrack
    printSubsets(arr, ans, i+1);
}
 
int main() {
   vector<int> arr = {1, 2, 3};
   vector<int> ans;

   printSubsets(arr, ans, 0);
   return 0;
}