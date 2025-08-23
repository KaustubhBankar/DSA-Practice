#include <iostream>
#include <vector>
using namespace std;

void getAllSubsets(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
    if(i == arr.size()){
        allSubsets.push_back(ans);
        return;
    }

    //include
    ans.push_back(arr[i]);
    getAllSubsets(arr, ans, i+1, allSubsets);

    
    // exclude
    ans.pop_back();
    getAllSubsets(arr, ans, i+1, allSubsets);


}
 
int main() {
   vector<int> arr = {1,2,3};
   vector<int> ans;
   vector<vector<int>> allSubsets;
   
   getAllSubsets(arr, ans, 0, allSubsets);

   cout<< "All subsets :"<< endl;
   for(auto val : allSubsets){
    cout<< "{ ";
    for(int num : val){
        cout<< num << " ";
    }
    cout<< "}\n";
   }
   return 0;
}