#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=10, i=2;

    cout<<"Bitwise left shift operator: "<<n<<" << "<<i<<" = "<<(n<<i)<<endl;
    
    n=10;
    i=1;
    
    cout<<"Bitwise right shift operator: "<<n<<" >> "<<i<<" = "<<(n>>i)<<endl;

    return 0;
}