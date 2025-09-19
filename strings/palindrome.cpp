#include <iostream>
#include <string>
using namespace std;
 
int main() {
   string str = "raceca";
   int n = str.size();

   int st = 0, end = n-1;
   bool isPalindrome = true;

   while (st < end)
   {
    if(str[st]!=str[end]){
        isPalindrome = false;
        break;
    }
    st++;
    end--;
   }

   if(isPalindrome){
    cout<< "yes";
   }else{
    cout<< "NO";
   }
   
   
   return 0;
}
