#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
   string str = "aabcdd";
   string res = "";
   unordered_map<char, int> freq;
   
   for(char ch : str){
    freq[ch]++;
   }

   char ans = '\0';
   for(char ch : str){
    if(freq[ch] == 1){
        ans = ch;
        break;
    }
   }
    if (ans != '\0')
        cout << "First non-repeating character: " << ans << endl;
   return 0;
}