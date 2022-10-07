// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
using namespace std;
#define ll long long
const int M = 1e7 + 7;

int main() {
    int n;
    cin>>n;
    int res=(n*(n + 1)*(2*n+1))/6;
    int res1=n*(n+1)/2;
    res1=res1*res1;
    cout<<res1-res;
    return 0;
}


// Sum of n natural numbers is n(n+1)/2
// Sum of squares of first natural numbers = (n*(n + 1)*(2*n+1))/6;
