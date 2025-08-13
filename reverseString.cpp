// Find the palindrome or not 



#include<iostream>
#include <string>
#include <algorithm>
using namespace std;



// Method 1 
// int main(){

//     string str = "apnacollege";
//     string rev = str;

//     reverse(rev.begin(), rev.end());

//     if(rev == str){
//         cout<< "palindrome" << endl;
//     }else{
//         cout << "not" << endl;
//     }

//     cout << "original String: "<< str << endl;
//     cout <<"reverse string: " << rev << endl;


//     return 0;
// }





// Method 2 
int main() {

    string str = "racecar";
    int st=0, end=str.length()-1;
    bool isPalidrome = true;
    while (st<end)
    {
        if(str[st] != str[end]){
            isPalidrome = false;
            break;   
        }
        st++;
        end--;
        
    }
    if(isPalidrome){
        cout<< "Palindrome"<< endl;
    }else{
        cout<< "Not a Palindrome"<< endl;
    }
    

   return 0;
}
