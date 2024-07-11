#include <iostream>
#include <math.h>
using namespace std;

float seriesSum(float n)
{
    float sum = 0; // 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.

    for (float i = 1; i <= n; i++)
    {
        cout << "1/" << i << "^" << i << " = ";
        float ans = 1 / pow(i, i);
        cout << ans << "\n";
        sum += ans;
    }
    return sum;
}

int main()
{
    float n;
    cout << "Input the value for nth term: ";
    cin >> n;

    float sum = seriesSum(n);
    cout << "The sum of the above series is: " << sum;

    return 0;
}