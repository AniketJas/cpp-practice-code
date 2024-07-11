#include <iostream>
using namespace std;

int chkPrime(int);

void chkPrimeRange(int a, int b)
{
    int count = 0;

    if (a == 1)
    {
        a++;
    }

    for (int i = a; i < b; i++)
    {
        if (chkPrime(i))
        {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nThe total number of prime numbers between " << a << " to " << b << "is: " << count;
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
    int low, high;
    cout << "Enter the number: ";
    cin >> low >> high;
    cout << "\nThe prime numbers between " << low << " and " << high << " are:\n";
    chkPrimeRange(low, high);
    return 0;
}