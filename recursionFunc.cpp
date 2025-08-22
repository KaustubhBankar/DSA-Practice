// recursion ---> Func calls itself
// base case ---> the conditon where func ends

#include <iostream>
#include <vector>
using namespace std;

void printNum(int n){
    // base case!!
    if(n == 1) {
        cout<< "1\n";
        return;
    };

    cout<< n << " ";
    printNum(n-1);
}

// factorial of Number
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// sum of N nums
int sumOfNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfNumbers(n - 1);
}

// Fibonacci
int Fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }

    return Fibonacci(n-1) + Fibonacci(n-2);
}



// check if array is sorted 
bool isSorted(vector<int> arr, int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}


// Recursive Binary search 

// helper func 
int binarySearch(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid = st + (end - st)/2;

        if(arr[mid] == tar) return mid;
        else if(arr[mid] >= tar){
            return binarySearch(arr, tar, st, mid-1);
        }else{
            return binarySearch(arr, tar, mid+1, end);
        }
    }
    return -1;
}

int search(vector<int> arr, int tar){
    int n = arr.size();
    return binarySearch(arr, tar, 0, n-1);
    
}

int main()
{
    int n = 4;
    vector<int> arr = {1,2,3,4,5};
    int tar = 4;
    
    printNum(n);
    cout << factorial(n);
    cout << "\n";
    cout << sumOfNumbers(n);
    cout << "\n";
    cout<<Fibonacci(n);
    cout << "\n";
    cout<<isSorted(arr, n);
    cout << "\n";
    cout<<isSorted(arr, tar);
    return 0;
}