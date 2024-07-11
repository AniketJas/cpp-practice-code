#include <iostream>
using namespace std;

void naturalNumbers()
{
    for (int i = 1; i <= 10; i++)
        cout << i << " ";
}

int main()
{
    cout << "The natural numbers are:\n";
    naturalNumbers();
    return 0;
}