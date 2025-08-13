
// ******* Using BruteForce approach ***********

#include <iostream>
#include <vector>
using namespace std;


// void pairSum(vector<int>& arr, int target){
//     vector<int> ans;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         for (int j = i + 1; j < arr.size() - 1; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 break;
//             }
//         }
//         if(!ans.empty()) break;
//     }

//     if(!ans.empty()){
//         cout << ans[0]<< " " << ans[1];
//     }else{
//         cout<< "Empty";
//     }
// }

// int main()
// {
//     vector<int> arr = {2, 7, 11, 15};
//     int target = 9;

//     pairSum(arr, target);
    
//     return 0;
// }







// Optimized Approach 



vector <int> pairSum(vector<int> arr, int target){

    vector <int> ans;
    int i=0;
    int j= arr.size()-1;

    while (i < j)
    {
        int ps = arr[i] + arr[j];
        if(ps > target){
            j--;
        }else if (ps < target)
        {
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
    return ans;
    
}

 
int main() {
   vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = pairSum(arr, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << ", " << arr[result[1]] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }
   return 0;
}