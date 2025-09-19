#include <iostream>
#include <vector>
using namespace std;

void printAllSubsets(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
    int n = arr.size();

    if(i == n){
        allSubsets.push_back(ans);
        return;
    }

    ans.push_back(arr[i]);
    printAllSubsets(arr, ans, i+1, allSubsets);

    ans.pop_back();

    int idx = i+1;
    while (idx < n && arr[idx] == arr[idx-1]) idx++;
    printAllSubsets(arr, ans, idx, allSubsets);
    
}
 
int main() {
   vector<int> arr = {1,2,2};
   vector<int> ans;
   vector<vector<int>> allSubsets;

   printAllSubsets(arr, ans, 0, allSubsets);

   for(auto nums : allSubsets){
    cout<< "{ ";
    for(int val : nums){
        cout<< val << " ";
    }
    cout<< "}\n";
   }
   return 0;
}