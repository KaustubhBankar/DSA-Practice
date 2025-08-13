#include<iostream>
using namespace std;

string removeAllOccurrences(string str, string part){
    while(str.length() > 0 && str.find(part) < str.length()){
        str.erase(str.find(part), part.length());
    }

    return str;
}


int main() {

    string str = "abcabcabcabcab";
    string part = "abc";

    string result = removeAllOccurrences(str, part);
    cout<< "the final string is:"<< result << endl;

   return 0;
}