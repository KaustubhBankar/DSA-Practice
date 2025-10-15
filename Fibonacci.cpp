// #include <iostream>
// using namespace std;
 
// int main() {
//    int n = 5;
//    int first = 0;
//    int second = 1;
//    int temp;

//    cout<< first << endl;
//    cout<< second << endl;
//    for(int i=2; i<n; i++){
//     int next = first + second;
//     cout<< next << endl;
//     first = second;
//     second = next;
//    }
//    return 0;
// }


#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
 
int main() {
   int n = 5;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << endl;
    }
   return 0;
}