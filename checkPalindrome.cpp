// functional recursion
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string st, int i)
{
    if (i >= st.size() / 2)
    {
        return true;
    }
    if (st[i] != st[st.size() - i - 1])
    {
        return false;
    }

    return checkPalindrome(st, i + 1);
}

int main()
{
    string st;
    getline(cin, st);

    if (checkPalindrome(st, 0))
    {
        cout << "Palindrome.";
    }
    else
    {
        cout << "Not a Palindrome.";
    }

    return 0;
}