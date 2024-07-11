#include <iostream>
using namespace std;

int chkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n == 1)
    {
        cout << "The entered number is neither prime nor composite number.";
        return 0;
    }

    int res = chkPrime(n);

    if (res == 0)
    {
        cout << "The entered number is a prime number.";
    }
    else
    {
        cout << "The entered number is not a prime number.";
    }
    return 0;
}