// The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
// Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<set>
#include<map>
using namespace std;
string convt(int dec){
    string bin=""; 
    while( dec > 0 ) {
        if( dec % 2 == 0 ) bin.insert( bin.begin( ), '0' );
        else bin.insert( bin.begin( ), '1' );
        
        dec >>= 1;
    }
    return bin;
}
bool isp(int n){
    int m=n;
    int res=0;
    while(m){
        res=res*10;
        res+=(m%10);
        m/=10;
    }
    return res==n;
}
bool iss(string str){
    int i=0;
    int j=str.length()-1;
    while(i<=j){
        if(str[i++]!=str[j--]){
            return false;
        }
    }
    return true;
}
int main() {
 long long sumi=0;
 for(int i=1;i<=1e6;i++){
    if(isp(i)){
        string num=convt(i);
        if(iss(num)){
            sumi+=i;
        }
    }
 }
cout<<sumi<<endl; 
return 0;
}
