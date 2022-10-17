// n! means n × (n − 1) × ... × 3 × 2 × 1
// For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
// and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
// Find the sum of the digits in the number 100!

#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
     vector<int>vec(99999);
    vec[0]=1;
    int sz= 1;
    int carry=0;
    for(int i=2;i<=n;i++){
        for(int j=0;j<sz;j++){
            int tem=vec[j]*i+carry;
            vec[j]=tem%10;
            carry=tem/10;
        }
        if(carry>0){
            while(carry>0){
                vec[sz]=carry%10;
                carry/=10;
                sz++;
            }
        }
    }
    int sumi=0;
    for(auto it:vec){
        sumi+=it;
    }
    cout<<sumi<<endl;
    return 0;
}
