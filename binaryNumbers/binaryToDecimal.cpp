#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(long binNum){
    int ans = 0;
    int power = 1;
    
    while(binNum>0){
        int rem = binNum%10;
        ans+=(rem*power);
        
        binNum/=10;
        power*=2;
    }
    return ans;
}

int main(){
    long binNum = 110011;

    cout<<"Binary number: "<<binNum<<endl;
    
    cout<<"Equivalent decimal number: "<<binaryToDecimal(binNum)<<endl;
    return 0;
}