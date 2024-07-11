#include <iostream>
using namespace std;

void naturalNumberSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }

    cout << "\nThe sum of first " << n << " natural numbers: " << sum;
}

int main()
{
    int n;
    cout << "Input a number of terms: ";
    cin >> n;
    cout << "The natural numbers upto " << n << "th term are:\n";
    naturalNumberSum(n);
    return 0;
}