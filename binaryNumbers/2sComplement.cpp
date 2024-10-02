#include<bits/stdc++.h>
using namespace std;

void onesComplement(string &bi){
    for(int i=0;bi[i]!='\0';i++){
        if(bi[i] == '0'){
            bi[i] = '1';
        }
        else{
            bi[i] = '0';
        }
    }
}

string twosComplement(string bi){
    int len = bi.length();
    onesComplement(bi);
    cout<<"1's complement: "<<bi<<endl;
    int carry = 0;

    for(int i=len-1;i>=0;i--){
        if(i == len-1){//adding one
            if(bi[i] == '0'){
                bi[i] = '1';
                break;  
            }else{
                bi[i] = '0';
                carry = 1;
            }
        }

        else if(carry == 1){
            if(bi[i] == '0'){
                bi[i] = '1';
                carry=0;
                break;
            }else{
                bi[i] = '0';
                carry = 1;
            }
        }
    }

    return bi;
}

int main(){
    
    string bi = "101";
    cout<<"Given binary number: "<<bi<<endl;
    string tows = twosComplement(bi);
    cout<<"2's complement: "<<tows<<endl;
    
    return 0;
}