#include <iostream>
#include<unordered_set>
using namespace std;
 
int main() {
   string str = "aabbcc";
   string result = "";
   unordered_set<char> ch;

   for(char c : str){
    if(ch.find(c) == ch.end()){
        result+=c;
        ch.insert(c);
    }
   }
   cout<< result;
   return 0;
}