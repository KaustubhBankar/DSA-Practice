#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

// BruteForce Approach to solve threeSum which takes the O(n^3 * log(unique triplet)) time complexity and O(unique triplet) space complexity
// vector<vector<int>> threeSum(vector<int> arr){
//     int n = arr.size();
//     vector<vector<int>> ans;
//     set<vector<int>> s;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(arr[i] + arr[j] + arr[k] == 0){
//                     vector<int> triplet = {arr[i] , arr[j] , arr[k]};
//                     sort(triplet.begin(), triplet.end());
//                     if(s.find(triplet) == s.end()){
//                         s.insert(triplet);
//                         ans.push_back(triplet);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }
// int main() {
//    vector<int> arr = {-1, 0, 1, 2, -1, -4};
//    vector<vector<int>> res = threeSum(arr);
//    for(auto trip: res){
//     cout<< "[";
//     for(auto num: trip){
//         cout << num<< " ";
//     }
//     cout << "]\n";
//    }
//    return 0;
// }

// Better approach which takes the O(n^2 * log(unique triplets)) time complexity and O(unique triplets * n) space complexity
// vector<vector<int>> threeSum(vector<int> arr)
// {
//     int n = arr.size();
//     set<vector<int>> uniqueTriplets;
//     for (int i = 0; i < n; i++)
//     {
//         int tar = -arr[i];
//         set<int> s;
//         for (int j = i + 1; j < n; j++)
//         {
//             int toFind = tar - arr[j];
//             if (s.find(toFind) != s.end()){
//                 vector<int> trip = {arr[i], arr[j], toFind};
//                 sort(trip.begin(), trip.end());
//                 uniqueTriplets.insert(trip);
//             }
//             s.insert(arr[j]);
//         }
//     }
//    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
//    return ans;
// }
// int main()
// {
//     vector<int> arr = {-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> res = threeSum(arr);
//     for (auto trip : res)
//     {
//         cout << "[";
//         for (auto num : trip)
//         {
//             cout << num << " ";
//         }
//         cout << "]\n";
//     }
//     return 0;
// }

// Optimal Approach or 2 Pointer approach takes the TC = O(nlogn + n^2) and SC = O(uniqueTriplets)
vector<vector<int>> threeSum(vector<int> arr)
{
    vector<vector<int>> ans;
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if(i > 0 && arr[i] == arr[i-1]) continue;
        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }else{
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;

                while(j<k && arr[j] == arr[j-1]) j++;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(arr);
    for (auto trip : res)
    {
        cout << "[";
        for (auto num : trip)
        {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}