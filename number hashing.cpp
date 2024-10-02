//number hashing
//hashing example: fixed max value

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];    
    }
    
    //pre-computation: hashing
    int hash[13]={0};
    for(int i=0;i<N;i++){
        hash[arr[i]] +=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetching from hash array
        cout<<"Occurance: "<<hash[number]<<endl;
    }
    
    return 0;
}