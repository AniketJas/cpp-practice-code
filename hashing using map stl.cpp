//hashing using map stl

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    map<int,int> mpp;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //hashing
        mpp[arr[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetching
        cout<<"Occurrence: "<<mpp[number]<<endl;
    }
    return 0;
}