// ncr = n!/r! * (n-r)!


#include <iostream>
using namespace std;


int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}
 
int main() {
  int n=8, r=2;

  int fact_n = factorial(n);
  int fact_r = factorial(r);
  int fact_nmr = factorial(n - r);

  double ans =  fact_n/(fact_r * fact_nmr);
  cout << ans << endl;

  return 0;
}