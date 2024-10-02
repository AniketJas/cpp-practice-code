//Insertion Sort - C++

#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int n=6;
    // cin>>n;
    
    int arr[n] = {13,46,24,52,20,9};
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    insertionSort(arr,n);
    
    cout<<"\nInsertion sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}