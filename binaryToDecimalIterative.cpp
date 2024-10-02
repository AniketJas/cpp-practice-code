#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> binaryToDecimalIterative(int n)
{
    vector<int> ans;
    while (n > 0)
    {
        ans.push_back(n % 2);
        n = n / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> arr = binaryToDecimalIterative(n);

    cout << "Binary No. -> ";
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}