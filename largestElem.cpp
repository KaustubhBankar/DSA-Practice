#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector <int> arr = {1,2,3,4,5};
    int largestElem = INT16_MIN;

    for(int i : arr){
        if(i > largestElem){
            largestElem = i;
        }
    }
    cout<< largestElem;
   return 0;
}