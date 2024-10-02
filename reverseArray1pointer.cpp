#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void reverseArray(int arr[], int size, int ptr)
{
    if (ptr >= size / 2)
    {
        return;
    }
    swap(arr[ptr], arr[size - ptr - 1]);
    reverseArray(arr, size, ptr + 1);
}

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << "Main array: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    reverseArray(arr, N, 0);

    cout << "\nReversed array: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}