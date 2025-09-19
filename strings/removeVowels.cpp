#include <iostream>
#include <unordered_set>
using namespace std;
 
int main() {
   string str = "Kaustubh";
   string result = "";

   unordered_set<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

   for(char ch : str){
    if(vowels.find(ch) == vowels.end()){
        result+=ch;
    }
   }

   cout<< result;
   return 0;
}