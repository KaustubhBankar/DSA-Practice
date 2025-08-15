#include <iostream>
using namespace std;

void simplePyramid(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void numberPyramid(int n)
{
    int num = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}



void charsPyramid(int n){
    char ch = 'A';
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<< ch;
            ch++;
        }
        cout << endl;
    }
}



void numberPyramidII(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<< j;
        }
        cout<<endl;
    }
}



void reverseNumberPyramid(int n){
    for(int i=0; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<< j;
        }
        cout<<endl;
    }
}



int main()
{
    int n = 4;

    simplePyramid(n);
    cout<< endl;
    numberPyramid(n);
    cout<< endl;
    charsPyramid(n);
    cout<< endl;
    numberPyramidII(n);
    cout<< endl;
    reverseNumberPyramid(n);

    return 0;
}
