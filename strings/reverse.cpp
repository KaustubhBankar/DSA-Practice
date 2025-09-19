// Q Reverse string without using extra space 
#include <iostream>
#include<string>
using namespace std;
 
int main() {
   string str = "Kaustubh";
   int n = str.size();
   
   int st=0, end=n-1;
   while (st<=end)
   {
    swap(str[st], str[end]);
    st++;
    end--;
   }

   cout<< str;
   
   return 0;
}



