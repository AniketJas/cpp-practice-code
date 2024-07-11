#include <iostream>
using namespace std;

void chkPerfectNumber(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i != 1)
        {
            int sum = 1;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    sum += j;
                }
            }
            if (sum == i)
            {
                cout << i << "\n";
            }
        }
    }
}

int main()
{
    int a = 1, b = 500;
    cout << "Enter the 1st numbers: ";
    cin >> a;
    cout << "Enter the 2nd numbers: ";
    cin >> b;
    cout << "\nThe perfect number between " << a << " and " << b << " are: \n";
    chkPerfectNumber(a, b);
    return 0;
}