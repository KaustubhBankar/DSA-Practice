#include <iostream>
#include<vector>
using namespace std;

vector<int> rotateArr(vector<int> arr,int k = 1){
    vector<int> ans;

    int st = 0, end = arr.size() -1;
    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    return arr;
 
}
 
int main() {
  vector<int> arr = {1,2,3,4,5}; /* 5 1 2 3 4*/
  int k = 1;
  rotateArr(arr, k);

  for(auto i : arr){
    cout<< i<< endl;
  }
}