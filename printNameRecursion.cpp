#include <bits/stdc++.h>
using namespace std;

void printName(string st, int N)
{
    if (N == 0)
    {
        return;
    }
    cout << st << " ";
    printName(st, N - 1);
}

int main()
{
    int N;
    cin >> N;
    string st;
    cin >> st;

    printName(st, N);

    return 0;
}