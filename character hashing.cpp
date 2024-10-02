//character hashing

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int hash[256]={0};

    //pre-computation: hashing
    for(int i=0;i<s.length();i++){
        hash[s[i]]+=1;
    }
    
    int q;
    cin>>q;
    
    while(q--){
        char ch;
        cin>>ch;
        //fetching from hash array
        cout<<"Occurence: "<<hash[ch]<<endl;
    }
    return 0;
}