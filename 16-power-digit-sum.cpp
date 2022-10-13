#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;

int main() {
vector<int> v;
int n;
cin>>n;
    v.push_back(2);
    int prod, carry=0, sum=0;
    n--;
    while(n){
        for(int i=0; i< v.size(); i++){
            prod = v[i]*2;
            prod += carry;
            v[i] = prod%10;
            carry = prod/10;
        }
        if(carry) v.push_back(carry);
        carry = 0;
        n--;
    }
    
    for(auto x:v) sum+= x;
    cout<<sum;

    return 0;
}
