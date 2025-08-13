#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector<int> arr = {1,2,3,5,6};
    int largestElem = INT16_MIN;
    int secLargestElem;

    for(int i: arr){
        if(i > largestElem){
            secLargestElem = largestElem;
            largestElem = i;
        }
        else if (secLargestElem != largestElem && i > secLargestElem)
        {
            secLargestElem = i;
        }
        
    }
    cout << secLargestElem;
   return 0;
}