#include <iostream>
#include <vector>
using namespace std;

int containerWithMostWater(vector<int> arr){
    int n = arr.size();
    int maxWater = 0;
        int lp = 0, rp = n - 1;
        while(lp < rp){
            int width = rp - lp;
            int height = min(arr[lp], arr[rp]);
            int currArea = width * height;
            maxWater = max(maxWater, currArea);
            if(arr[lp] < arr[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return maxWater;
}
 
int main() {
   vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};

   cout<< containerWithMostWater(arr);
   return 0;
}