
// here i used unsigned long as the given value is going out of index in int range of cpp

#include <iostream>
#include<vector>
using namespace std;
#define ll long long
const int M = 1e7 + 7;
bool isPrime(int prm){
for(int i=2;i*i<prm;i++){
    if(prm%i==0)return false;
}
return true;
}
int main() {
    unsigned long long int n=600851475143;
    int maxi=0;
    vector<int>vec;
    for(int i=2;i<n;i++){
        if((n%i)==0){
            int num=i;
            //int denom=(n/i);
            if(isPrime(num)){
                maxi=max(maxi,num);
            }
            // if(isPrime(denom)){
            //     maxi=max(maxi,denom);
            // }
        }
       
    }
     cout<<maxi<<endl;
    return 0;
}
