#include <iostream>
using namespace std;

void naturalNumberSum()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }

    cout << "\nThe sum of first 10 natural numbers: " << sum;
}

int main()
{
    cout << "The natural numbers are:\n";
    naturalNumberSum();
    return 0;
}