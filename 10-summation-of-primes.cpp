// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include <iostream>
#include<math.h>
#include<vector>

using namespace std;
#define ll long long
const int M = 1e7 + 7;

// Primality test (refer sandeep jain course in pc in prime )
bool isp(int num){
  if (num <= 1) return false;
  if (num <= 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false;

  int i = 5;
  while (i * i <= num) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return false;
    }
    i = i + 6;
  }
  return true;
};
int main(){
    int n;
    cin>>n;
    bool prime[n+1];
    long long sum=0;
    for(int i=0;i<=n;i++){
        if(isp(i))sum+=i;
    }
    cout<<sum;
    return 0;
}
