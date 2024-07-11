#include <iostream>
using namespace std;

int chkPrime(int);

int findLastPrime(int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        if (chkPrime(i))
        {
            return i;
        }
    }
}

int chkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> n;

    cout << findLastPrime(n) << " is the last prime number before " << n;

    return 0;
}