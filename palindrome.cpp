// state the given string is alphaNumeric or not
// alphaNumeric means letter from 'a-z', 'A-Z' and Number from '0-9'

#include <iostream>
using namespace std;

bool isAlphaNum(char ch)
{
    if(ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z'){
        return true;
    }
    return false;
}

bool isPalindrome(string str)
{
    
    int st = 0, end = str.length() - 1;

    while (st < end)
    {
        
        if (!isAlphaNum(str[st]))
        {
            st++;
            continue;
        }
        if (!isAlphaNum(str[end]))
        {
            end--;
            continue;
        }
        if (tolower(str[st]) != tolower(str[end]))
        {
            return false;
        }
        
        st++;
        end--;
    }
    return true;
}


int main() {

    string str = "Ac3?e3c&a";
    // string str = "Alpha";
    if(isPalindrome(str)){
        cout<< "Palindrome" << endl;
    }else{
        cout<< "not palidrome" << endl;
    }


   return 0;
}
