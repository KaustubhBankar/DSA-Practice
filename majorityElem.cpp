#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int majorityElem(vector<int> arr){
   int n = arr.size();

    int freq = 0, ans = 0;

        for(int val : arr){
            if(freq == 0){
                ans = val;
            }
            if(ans == val){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
}
 
int main() {
   vector <int> arr = {2,2,1,1,1,1,2};

   cout<< majorityElem(arr);
   return 0;
}