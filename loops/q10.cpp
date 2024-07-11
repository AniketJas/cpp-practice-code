#include <iostream>
using namespace std;

int sumDigit(int n)
{
    int digit, sum = 0;

    for (int i = n; i > 0; i = i / 10)
    {
        digit = i % 10;
        sum += digit;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Input a number: ";
    cin >> num;

    cout << "The sum of digits of " << num << " is: " << sumDigit(num);
    return 0;
}