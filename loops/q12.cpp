#include <iostream>
#include <math.h>
using namespace std;

//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

int seriesSum(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int product = i * i;
        cout << "\n"
             << i << "*" << i << " = " << product;
        sum += product;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Input the value for nth term: ";
    cin >> n;

    int sum = seriesSum(n);

    cout << "\n\nThe sum of the above series is: " << sum;
    return 0;
}