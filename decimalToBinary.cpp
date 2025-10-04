#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int decimalToBinary(int num){
    int ans = 0, pow = 1;
    while(num > 0){
        int remainder = num%2;
        num=num/2;

        ans += remainder*pow;
        pow = pow*10;
    }
    return ans;
}


string decimalToBinUsingString(int num){
    if(num == 0) return 0;
    string s;
    
    while (num > 0)
    {
        s.push_back('0' + (num % 2));
        num/=2;
    }
    reverse(s.begin(), s.end());
    return s;
    
}


 
int main() {
   int num = 50;
   cout<< decimalToBinary(num)<< endl;
   cout<< decimalToBinUsingString(num);
   return 0;
}