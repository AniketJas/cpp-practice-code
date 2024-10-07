#include <bits/stdc++.h>
using namespace std;

// brute-force approach
void leftRotation(vector<int> &arr, int d)
{
    vector<int> temp;
    d = d % arr.size(); // d will always range from 0-(size-1).

    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = d; i < arr.size(); i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[arr.size() - d + i] = temp[i];
    }
    return;
}

// optimal solution
int Reverse(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void leftRotationOptimal(vector<int> &arr, int d)
{
    int size = arr.size();
    Reverse(arr, 0, size - d);
    Reverse(arr, size - d + 1, size - 1);
    Reverse(arr, 0, size - 1);
}

// using STL
void leftRotationOptimalSTL(vector<int> &arr, int d)
{
    int size = arr.size();
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 5;

    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    leftRotation(arr, k);           // brute-force call
    leftRotationOptimal(arr, k);    // optimal solution call with mainual reverse func
    leftRotationOptimalSTL(arr, k); // optimal solution call using STL

    cout << endl;

    cout << "final array after " << k << " rotation: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}