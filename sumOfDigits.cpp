#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int result = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        num/=10;

        result+=lastDig;

    }

    return result;
}

int main()
{

    cout << "sum :" << sumOfDigits(123);
    return 0;
}