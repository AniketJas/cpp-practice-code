#include <iostream>
#include <math.h>

using namespace std;

float factorial(float n)
{
    float product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

void seriesSum(int x, int t)
{
    float sum = 0;

    for (int i = 1; i <= t; i++)
    {
        float term = 2 * (i - 1);
        float termSum = pow(x, term) / factorial(term);

        if (i % 2 != 0)
        {
            cout << "term " << i << " value is: " << termSum << "\n";
            sum += termSum;
        }
        else
        {
            cout << "term " << i << " value is: -" << termSum << "\n";
            sum -= termSum;
        }
    }
    cout << "\nThe sum of the above series is: " << sum;
}

int main()
{
    float x, term;
    cout << "Input the value of X: ";
    cin >> x;
    cout << "Input the value of for thenth term: ";
    cin >> term;

    seriesSum(x, term);

    return 0;
}