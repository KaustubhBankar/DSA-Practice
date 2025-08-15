#include <iostream>
using namespace std;
 
// int main() {
//    int n = 4;
//    for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         cout<< "*";
//     }
//     cout<< endl;
//    }
//    return 0;
// }


// for Numbers 1 to n
// int main() {
//    int n = 4;
//    for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         cout<< j;
//     }
//     cout<< endl;
//    }
//    return 0;
// }


// print alphabets 
// int main() {
//    int n = 4;
//    for(int i=1; i<=n; i++){
//     char ch = 'A';
//     for(int j=1; j<=n; j++){
//         cout<< ch;
//         ch += 1;
//     }
//     cout<< endl;
//    }
//    return 0;
// }


// print numbers 
int main() {
   int n = 4;
   int num = 1;
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<< num ;
        num++;
    }
    cout<< endl;
   }
   return 0;
}