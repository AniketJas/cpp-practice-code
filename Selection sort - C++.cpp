//Selection sort - C++

#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min = 0;
        
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        
        swap(arr[i],arr[min]);
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
    
    selectionSort(arr,n);
    
    cout<<"\nSelection sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}