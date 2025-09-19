#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Kaustubh Bankar";

    int vowels = 0, consonants = 0;

    for (char c : str) {
        char ch = tolower(c);

        if (ch >= 'a' && ch <= 'z') { 
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "String: " << str << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
