#include <iostream>
#include<unordered_set>
#include<vector>
using namespace std;


// Find Duplicate using Linked List which takes constant extra Space i.e O(1)
int FindDuplicate(vector<int> arr){
    int slow = arr[0], fast = arr[0];
    do{
        slow = arr[slow];  /*---> increace slow by 1*/
        fast = arr[arr[fast]];  /*---> increace fast by 2*/
    }while(slow != fast);

    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
    
}


int main(){
    vector<int> arr = {1,3,4,2,2};

    cout << FindDuplicate(arr);
    return 0;
}


// Find Duplicate using unordered set but doesn't take constant extra space i.e, O(1)
// int findDuplicate(vector<int> arr){
//     unordered_set<int> s;

//     for(int n : arr){
//         if(s.find(n) != s.end()){
//             return n;
//         }
//         s.insert(n);
//     }
//     return -1;
// }
 
// int main() {
//   vector<int> arr = {1,3,4,2,2};

//   cout<< findDuplicate(arr);
//    return 0;
// }