#include <iostream>
using namespace std;
 
int main() {
   int n=4;
   for(int i=0; i<n; i++){
    for(int sp=0; sp<=i; sp++){
        cout<< " ";
    }
    for(int j=1; j<=n-i; j++){
        cout<< i+1;
    }
    cout<< endl;
   }
   return 0;
}