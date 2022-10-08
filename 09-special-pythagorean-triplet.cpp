// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>
#include<math.h>
using namespace std;
#define ll long long
const int M = 1e7 + 7;
// my solution O(N^2)
int main() {
    int target;
    cin>>target;
    for(int i=1;i<=target;i++){
        for(int j=i+1;j<=target;j++){
            int c=target-i-j;
            if(i*i + j*j == c*c){
                cout<<i*j*c;
                break;
            }
        }
    }
    return 0;
}


// Most optimized approach O(N):

// Given:  a+b+c=n    (This condition should satisfy)
// so   c = n - a - b     ----(1)

// we know a^2 + b^2 =  c^2    ----(2)

// putting value of c from (1) in (2)

// a^2  +  b^2  =  (n-a - b)^2
// a^2 + b^2  =   (n-a)^2 + b^2 - 2(n-a)(b)
// a^2 + b^2  =   (n)^2 + a^2 - 2na + b^2 - 2nb +2ab
// n^2 - 2na  =   2nb - 2ab
// b  =  (n^2 - 2na)/(2n - 2a) ---(3)


//     so we can find value of a from loop upto N/3
//  b  =  (n^2 - 2na)/(2n - 2a)   (from eq 3)
//      c = n - a - b

//      Now we have value of a,b,c 
//      so find max value of a*b*c which satify all conditions given in question 
//      Conditions :
//      (1) a < b < c
//      (2) a^2  +  b^2  =  c^2
//      (3) a+b+c = n
