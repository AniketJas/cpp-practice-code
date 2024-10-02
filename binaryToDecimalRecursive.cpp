#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> ans;

void binaryToDecimalRecursive(int n)
{
    if (n <= 0)
    {
        return;
    }
    int remainder = n % 2;
    binaryToDecimalRecursive(n / 2);
    ans.push_back(remainder);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    binaryToDecimalRecursive(n);

    cout << "Binary No. -> ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}