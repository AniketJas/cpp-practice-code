#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

int main()
{
    int a, b;
    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the second number: ";
    cin >> b;

    cout << "The Greatest Common Divisor is: " << findGCD(a, b);
    return 0;
}