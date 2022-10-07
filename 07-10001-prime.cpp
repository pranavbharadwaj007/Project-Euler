// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?

#include <iostream>
#include<math.h>
using namespace std;
#define ll long long
const int M = 1e7 + 7;

int main() {
    int n;
    cin>>n;
   int i=2;
   int cnt=0;
   while(cnt<=n){
    bool flg=true;
    for(int j=2;j<i;j++){
        if((i%j)==0){
            flg=false;
            break;
        }

    }
    if(flg)cnt++;
    if(cnt==n){
        cout<<i<<endl;
        break;
    }
    i++;
   }
   //cout<<i<<endl;
    return 0;
}
