//Recursion - Insertion Sort

#include<bits/stdc++.h>
using namespace std;

void insertionSortRecursive(int arr[],int n){
    if(n<=1){
        return;
    }
    
    insertionSortRecursive(arr, n-1);
    
    int last = arr[n-1];
    int j=n-2;
    
    while(j>=0 && arr[j]>last){
        arr[j+1] = arr[j];
        j--;
    }
    
    arr[j+1] = last;
}

int main(){
    
    int n=6;
    // cin>>n;
    
    int arr[n] = {12,3,6,55,2,43};
    // cout<<"Enter the values in array: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    insertionSortRecursive(arr,n);
    
    cout<<"\nSorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}