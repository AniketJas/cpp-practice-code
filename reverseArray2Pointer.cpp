#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

void reverseArray(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverseArray(arr,l+1,r-1);
}

int main(){
    int N;
    cin>>N;
    
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    cout<<"Main array: ";
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    
    reverseArray(arr,0,N-1);
    
    cout<<"\nReversed array: ";
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}