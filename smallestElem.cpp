#include <iostream>
using namespace std;
 
int main() {
   int arr[] = {1,2,3,4,5};
    int smallestElem = INT16_MAX;
    int n = 5;

    for(int i=0; i<n; i++){
        if(arr[i] < smallestElem){
            smallestElem = arr[i];
        }
    }
    cout<< smallestElem;
   return 0;
}