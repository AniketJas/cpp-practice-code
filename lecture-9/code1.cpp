#include <iostream>
using namespace std;
int main()
{
    int arr[15];                   // declaration
    int arr1[5] = {1, 2, 3, 4, 5}; // initialization

    cout << "value at 5th index in arr: " << arr[5] << endl; // accessing array value at any given index. It generates garbage value as we have not initialized the array, only declared it.

    cout << "value at 3th index in arr1: " << arr1[3] << endl; // accessing array value at any given index. It generated a set value as arr is initialised above

    cout << "value at 20th index in arr: " << arr[20] << endl; // accessing index outside limit of array. It generated warning regarding size of array and prints garbage value

    cout << "value at 20th index in arr1: " << arr1[20] << endl; // accessing index outside limit of array. It generated warning regarding size of array and prints garbage value
    return 0;
}