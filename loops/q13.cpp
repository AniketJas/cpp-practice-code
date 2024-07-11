#include <iostream>
#include <math.h>
using namespace std;

//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

int seriesSum(int n)
{
    int finalSum = 0;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                cout << j;
            }
            else
            {
                cout << j;
            }
            if (j != i)
            {
                cout << "+";
            }
            sum += j;
        }
        cout << " = " << sum << endl;
        finalSum += sum;
    }
    return finalSum;
}

int main()
{
    int n;
    cout << "Input the value for nth term: ";
    cin >> n;

    int sum = seriesSum(n);

    cout << "The sum of the above series is: " << sum;
    return 0;
}