#include <iostream>
using namespace std;

double calculator(int a, char op, int b, double result)
{
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0)
        {
            result = a / b;
        }else{
            cout<< "error";
        }
        break;

    default:
        cout << "Invalid operation" << endl;
        break;
    }
    return result;
}

int main()
{
    int a, b;
    char op;
    double result;
    cout << "Enter first No" << endl;
    cin >> a;
    cout << "Enter operation" << endl;
    cin >> op;
    cout << "Enter second No" << endl;
    cin >> b;

    cout << calculator(a, op, b, result) << endl;
    return 0;
}