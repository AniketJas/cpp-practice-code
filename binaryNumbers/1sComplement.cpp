#include<bits/stdc++.h>
using namespace std;

void onesComplement(string &bi){
    int len = bi.length();
    cout<<"Length of the binary string: "<<len<<endl;
    
    for(int i=0;bi[i]!='\0';i++){
        if(bi[i] == '0'){
            bi[i] = '1';
        }
        else{
            bi[i] = '0';
        }
    }
}

int main(){
    
    string bi = "00000101";
    cout<<"Given binary number: "<<bi<<endl;
    onesComplement(bi);
    cout<<"1's complement: "<<bi<<endl;
    
    return 0;
}