//Recursion - Bubble Sort

#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

void bubbleSortRecursive(int arr[],int n){
    if(n==1){
        return;
    }
    
    int didSwap=0;
    
    for(int i=0;i<n-1;i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            didSwap++;
        }
    }
    
    if(!didSwap){
        return;
    }
    
    bubbleSortRecursive(arr, n-1);
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
    
    bubbleSortRecursive(arr,n);
    
    cout<<"\nSorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}