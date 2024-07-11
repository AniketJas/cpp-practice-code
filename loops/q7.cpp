#include <iostream>
using namespace std;

int factorial(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "The factroial of " << n << " is: " << factorial(n);
    return 0;
}