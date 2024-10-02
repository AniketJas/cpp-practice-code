//Bubble Sort - C++

#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

void bubbleSort(int arr[], int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    
    bubbleSort(arr,n);
    
    cout<<"\nBubble sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}