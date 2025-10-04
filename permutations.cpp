#include <iostream>
#include <vector>
using namespace std;


void getPerms(vector<int>& arr, int idx, vector<vector<int>>& ans){
    int n = arr.size();
    if(idx == n){
        ans.push_back({arr});
        return;
    }

    for(int i=idx; i<n; i++){
        swap(arr[idx], arr[i]);
        getPerms(arr, idx+1, ans);
        swap(arr[idx], arr[i]);
    }
}

vector<vector<int>> getAllPermutations(vector<int>& arr){
    vector<vector<int>> ans;
    getPerms(arr, 0, ans);
    return ans;
}
 
int main() {
   vector<int> arr = {1,2,3};
   vector<vector<int>> res = getAllPermutations(arr);
   for(auto perm : res){
    cout<< "[";
    for(int val : perm){
        cout<< val << " ";
    }
    cout<< "]\n";
   }
   return 0;
}