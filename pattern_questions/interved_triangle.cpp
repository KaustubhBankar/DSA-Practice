#include <iostream>
using namespace std;
 
int main() {
   int n=4;

   for(int i=n; i>=0; i--){

    for(int space=0; space<=n-i; space++){
        cout<< " ";
    }
    for(int j=0; j<=2*i; j++){
        cout<< "*";
    }
    cout<< endl;
   }
   return 0;
}