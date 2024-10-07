#include <bits/stdc++.h>
using namespace std;

// Leetcode Medium Problem
void Reverse(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        unsigned int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
void rotate(vector<int> &nums, int k)
{
    int size = nums.size();
    k = k % size;

    Reverse(nums, size - k, size - 1);
    Reverse(nums, 0, size - k - 1);
    Reverse(nums, 0, size - 1);
}